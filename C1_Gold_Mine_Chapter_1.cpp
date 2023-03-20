#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<ll>> adj(100);
vector<ll> c(100),vis(100),parent(100),dist;

void dfs(ll i,ll p,ll d)
{
    vis[i]=1;
    parent[i]=p;
    dist[i]=d+c[i];
    for(auto e:adj[i])
    {
        if(!vis[e])
        {
            dfs(e,p,d+c[i]);
        }
    }
}

int main()
{
    FASTIO;
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        ll n;
        cin>>n;
        vis.clear();
        vis.resize(n+1);
        c.clear();
        c.resize(n+1);
        adj.clear();
        adj.resize(n+1);
        parent.clear();
        parent.resize(n+1);
        dist.clear();
        dist.resize(n+1);
        for(ll i=1;i<=n;i++) cin>>c[i];
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        vis[1]=1;
        for(auto e:adj[1])
        {
            dfs(e,e,0);
        }
        ll maxx=0;
        // for(ll i=1;i<=n;i++) cout<<dist[i]<<" ";
        // cout<<"\n";
        for(ll i=1;i<=n;i++)
        {
            maxx=max(maxx,dist[i]+c[1]);
            for(ll j=1;j<=n;j++)
            {
                if(parent[i]!=parent[j])
                {
                    maxx=max(maxx,dist[i]+dist[j]+c[1]);
                }
            }
        }
        cout<<"Case #"<<x<<": "<<maxx<<"\n";
    }   
}