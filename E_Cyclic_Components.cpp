#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int n,m,ans=0;
vector<vector<int>> adj;
vector<int> vis;

int dfs(int i)
{
    int f=1;
    vis[i]=1;
    if(adj[i].size()!=2) f=0;
    for(auto e:adj[i])
    {
        if(vis[e]==0) f&=dfs(e);
    }
    return f;
}

int main()
{
    FASTIO;   
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0) ans+=dfs(i);
    }
    cout<<ans;
}