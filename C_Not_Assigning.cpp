#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<ll>> v(100005);
map<pair<ll,ll>,ll>m;
void dfs(int i,int p,int x)
{
    // cout<<x<<" ";
    m[{i,p}]=x;
    m[{p,i}]=x;
    for(int e:v[i])
    {
        if(e!=p)dfs(e,i,!x);
    }
}


int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f=1;;
        cin>>n;
        m.clear();
        v.clear();
        v.resize(n+1);
        vector<pair<ll,ll>> x;
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
            x.pb({a,b});
        }
        for(ll i=1;i<=n;i++)
        {
            if(v[i].size()>2) 
            {
                f=0;
                break;
            }
            
        }
        if(!f) cout<<"-1\n";
        else
        {
            ll j=0;
            for(ll i=1;i<=n;i++)
            {
                if(v[i].size()==1)
                {
                    j=i;
                    break;
                }
            }
            // cout<<j<<" ";
            dfs(j,j,1);
            for(ll i=0;i<n-1;i++)
            {
                if(m[{x[i].first,x[i].second}]==0) cout<<"2 ";
                else cout<<"3 ";
            }
        }
        cout<<"\n";
    }
}