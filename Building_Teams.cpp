#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define ff first
#define ss second
#define N 2e5+7

ll n,m,f=0;
vector<vector<ll>> adj;
vector<ll> vis,ans;
vector<pair<ll,ll>> ed;

void dfs(int i,int p)
{
    vis[i]=1;
    ans[i]=p;
    for(auto e:adj[i])
    {
        if(vis[e]==0)
        {
            dfs(e,!p);
        }
    }
}

int main()
{
    FASTIO;
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);
    ans.resize(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
        ed.pb({a,b});
    }
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0) dfs(i,0);
    }
    for(ll i=0;i<m;i++)
    {
        auto e=ed[i];
        if(ans[e.ff]==ans[e.ss]) 
        {
            f=1;
            break;
        }
    }
    if(f) cout<<"IMPOSSIBLE\n";
    else
    {
        for(ll i=1;i<=n;i++) cout<<ans[i]+1<<" ";
    }
}