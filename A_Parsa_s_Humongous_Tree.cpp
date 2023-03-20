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

vector<pair<ll,ll>> v;
vector<vector<ll>> adj;
pair<ll,ll> dfs(ll i,ll p)
{
    // vis[i]=1;
    ll x=0,y=0;
    for(auto e:adj[i])
    {
        if(e!=p)
        {
            pair<ll,ll> temp=dfs(e,i);
            x+=max(abs(v[i].ff-v[e].ff)+temp.ff,abs(v[i].ff-v[e].ss)+temp.ss);
            y+=max(abs(v[i].ss-v[e].ff)+temp.ff,abs(v[i].ss-v[e].ss)+temp.ss);
        }
    }
    return {x,y};
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
        v.clear();
        v.resize(n+1);
        adj.clear();
        adj.resize(n+1);
        // dp.clear();
        // dp.resize(n+1);
        for(ll i=1;i<=n;i++)
        {
            cin>>v[i].ff>>v[i].ss;
        }        
        for(ll i=1;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        pair<ll,ll>ans=dfs(1,-1);
        cout<<max(ans.ff,ans.ss)<<"\n";
    }   
}