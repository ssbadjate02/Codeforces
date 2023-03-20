#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())
#define N 2e5 + 7
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<int> h(n+1),vis(n+1,-1e9);
    for(ll i=1;i<=n;i++) cin>>h[i];
    vector<vector<ll>> adj(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<int> ans(n+1, 1e9);
    // vector<int> vis(n+1);
    queue<pair<int,int>> q;
    q.push({1,0});
    vis[1]=0;
    while(!q.empty())
    {
        auto e = q.front();
        q.pop();
        for(auto u:adj[e.ff])
        {
            if(h[u]-h[e.ff]>=0 && vis[u]<e.ss-2*(h[u]-h[e.ff])) 
            {
                q.push({u,e.ss-2*(h[u]-h[e.ff])});
                vis[u]=e.ss-2*(h[u]-h[e.ff]);
            }
            else if(h[u]-h[e.ff]<0 && vis[u]<e.ss-(h[u]-h[e.ff]))
            {
                q.push({u,e.ss-(h[u]-h[e.ff])});
                vis[u]=e.ss-(h[u]-h[e.ff]);
            }
        }
    }
    // for(ll i=1;i<=n;i++) cout<<vis[i]<<" ";
    cout<<*max_element(vis.begin(),vis.end());
}
