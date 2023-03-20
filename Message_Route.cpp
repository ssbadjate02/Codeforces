#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define ff first
#define ss second
#define N 1e9+7

ll n,m;
vector<vector<ll>> adj;
vector<ll> vis,p;

int main()
{
    FASTIO;
    FASTIO;
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);
    p.resize(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    } 
    
    set<pair<ll,ll>> s;
    vector<ll> mind(n+1,N);
    vis[1]=1;
    mind[1]=0;
    s.insert({0,1});
    while(!s.empty())
    {
        pair<ll,ll> a=*s.begin();
        s.erase(s.begin());
        ll dist=a.ff;
        ll i=a.ss;
        for(auto e:adj[i])
        {
            if(mind[e]>dist + 1)
            {
                if(s.find({mind[e],e})!=s.end()) s.erase(s.find({mind[e],e}));
                s.insert({dist+1,e});
                mind[e]=dist+1;
                p[e]=i;
                vis[e]=1;
            }
        }
    }
    if(!vis[n]) cout<<"IMPOSSIBLE\n";
    else
    {
        ll x=n;
        vector<ll> path;
        while(x!=1)
        {
            path.pb(x);
            x=p[x];
            if(x==1) break;
        }
        path.pb(1);
        reverse(path.begin(),path.end());
        cout<<path.size()<<"\n";
        for(ll i=0;i<path.size();i++) cout<<path[i]<<" ";
    }
}