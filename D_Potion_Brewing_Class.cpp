#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

vector<vector<pair<ll,pair<ll,ll>>>> v;
vector<ll> vis,q;

ll dfs(int i)
{
    if(v[i].size()==1) return v[i][0].ss.ff;
    ll lcm = 1;
    for(auto e:v[i])
    {
        if(i!=e.ff)lcm=(lcm*(e.ss.ff))/__gcd(lcm,e.ss.ff);
    }
    q[i]=lcm;
    for(auto e:v[i])
    {
        if(i!=e.ff) q[i]+=((lcm/dfs(e.ff))*e.ss.ss);
    }
    return q[i];
}   

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,summ=0;
        cin>>n;
        q.clear();
        q.resize(n+1);
        vis.resize(n+1);
        vis.clear();
        v.clear();
        v.resize(n+1);
        for(ll i =0;i<n-1;i++)
        {
            ll a,b,x,y;
            cin>>a>>b>>x>>y;
            v[a].pb({b,{x,y}});
            v[b].pb({a,{y,x}});
        }
        for(ll i=1;i<=n;i++)
        {
            if(v[i].size()>1)
            {
                dfs(i);
                break;
            }
        }
        for(ll i=1;i<=n;i++) summ+=q[i];
        cout<<summ<<"\n";
    }   
}