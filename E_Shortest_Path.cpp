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

int main()
{
    FASTIO;
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>> adj(n+1);
    for(ll i=0;i<m;i++) 
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    set<pair<ll,pair<ll,ll>>> na;
    for(ll i=0;i<k;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        na.insert({a,{b,c}});
    }  
    set<pair<ll,ll>> s;
    s.insert({0,1});
    vector<ll> mind(n+1,1e9+7),par(n+1);
    mind[1]=0;
    par[1]=-1;
    set<pair<ll,ll>> vis;
    // vis.insert({-1,1});
    while(!s.empty())
    {
        auto a=*s.begin();
        s.erase(s.begin());
        ll d=a.ff, x=a.ss;
        if(x==n) break;
        for(auto e:adj[x])
        {
            if(vis.count({e,x})==0 && na.find({par[x],{x,e}})==na.end())
            {
                par[e]=x;
                vis.insert({e,x});
                mind[e]=d+1;
                s.insert({d+1,e});
            }
        }
    }
    if(mind[n]>1e9) cout<<"-1\n";
    else
    {
        ll x=n;
        vector<ll> path;
        while(x!=1)
        {
            path.pb(x);
            x=par[x];
            if(x==1) break;
        }
        path.pb(1);
        reverse(path.begin(),path.end());
        cout<<mind[n]<<"\n";
        for(ll i=0;i<path.size();i++) cout<<path[i]<<" ";   
    }
}