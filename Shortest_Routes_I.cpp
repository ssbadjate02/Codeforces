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
    ll n,m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>> adj(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].pb({b,c});
        // adj[b].pb({a,c});
    }
    set<pair<ll,ll>> s;
    vector<ll> mind(n+1,1e15);
    mind[1]=0;
    s.insert({0,1});   
    while(!s.empty())
    {
        auto a=*s.begin();
        s.erase(s.begin());
        ll dist=a.ff;
        ll i=a.ss;
        for(auto e:adj[i])
        {
            if(mind[e.ff]>dist+e.ss)
            {
                if(s.find({mind[e.ff],e.ff})!=s.end()) s.erase(s.find({mind[e.ff],e.ff}));
                s.insert({dist+e.ss,e.ff});
                mind[e.ff]=dist+e.ss;
            }
        }

    }
    for(ll i=1;i<=n;i++) cout<<mind[i]<<" ";
}