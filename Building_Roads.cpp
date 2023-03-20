#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

ll n,m;
vector<vector<ll>> adj;
vector<ll> vis;

void dfs(int i)
{
    vis[i]=1;
    for(auto e:adj[i])
    {
        if(!vis[e]) dfs(e);
    }
}

int main()
{
    FASTIO;
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll ans=0;
    vector<pair<ll,ll>> p;   
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        dfs(i);
        if(i!=1) ans++;
        if(i!=1) p.pb({i-1,i});
    }
    cout<<ans<<"\n";
    for(auto e:p)
    {
        cout<<e.ff<<" "<<e.ss<<"\n";
    }
}