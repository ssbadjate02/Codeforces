#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,m,ans=0;
vector<vector<ll>> adj;
vector<ll> vis;
vector<ll> dp;
void dfs(ll i)
{
    vis[i]=1;
    for(auto e:adj[i])
    {
        if(!vis[e]) dfs(e);
        dp[i]=max(dp[i],dp[e]+1);
    }
    ans=max(ans,dp[i]);
} 

int main()
{
    FASTIO;
    cin>>n>>m;
    adj.resize(n+1);
    dp.resize(n+1);
    vis.resize(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
    }
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]) continue;
        dfs(i);
    }   
    // for(ll i=1;i<=n;i++) ans=max(ans,dp[i]);
    cout<<ans<<"\n";   
}