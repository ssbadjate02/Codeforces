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

vector<vector<ll>> adj,dist; 

void dfs(ll i, ll p, ll init)
{
    
    for(auto e:adj[i])
    {
        if(e!=p) 
        {
            dist[init][e] = dist[init][i]+1;
            dfs(e,i,init);
        }
    }
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        adj.clear();
        dist.clear();
        adj.resize(n+1);
        dist.resize(n+1,vector<ll>(n+1));
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
            dist[a][b] = 1;
            dist[b][a] = 1;
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        for(ll i=1;i<=n;i++)
        {
            dfs(i,-1,i);
        }
        vector<vector<ll>> v(n+1,vector<ll>(n+1));
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                v[i][dist[i][j]]++;
            }
        }
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++) cout<<dist[i][j]<<" ";
            cout<<"\n";
        }
        for(ll i=1;i<=n;i++)
        {
            ll c=INT_MAX;
            for(ll j=1;j<=n;j++)
            {
                if(i==j) continue;
                ll d=dist[i][j];
                c=min(c,v[j][d]);
                cout<<i<<" "<<j<<" "<<c<<"\n";
            }
            ans=max(ans,c);
        }
        cout<<ans<<"\n";
    }   
}