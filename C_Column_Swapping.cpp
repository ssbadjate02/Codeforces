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

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,f=0;
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m)),p(n,vector<ll>(m));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) 
            {
                cin>>v[i][j];
                p[i][j]=v[i][j];
            }
        }
        for(ll i=0;i<n;i++) sort(all(p[i]));
        vector<ll> z;
        for(ll i=0;i<n && z.empty();i++)
        {
            ll c=0;
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]!=p[i][j]) z.pb(j);
            }
        }
        if(z.size()==0)
        {
            cout<<1<<" "<<1<<"\n";
            continue;
        }
        if(z.size()>2)
        {
            cout<<"-1\n";
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            swap(v[i][z[0]],v[i][z[1]]);
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]!=p[i])
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"-1\n";
        else cout<<z[0]+1<<" "<<z[1]+1<<"\n";
    }   
}