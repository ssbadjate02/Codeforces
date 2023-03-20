#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

vector<ll> v,sg,parent;
vector<vector<ll>> adj;
ll maxx=0;
ll dfs(ll i, ll p)
{
    ll gcd = v[i];
    parent[i] = p;
    for(auto e:adj[i])
    {
        if(e!=p)
        {
            gcd = __gcd(gcd,dfs(e,i));
        }
    }
    return sg[i] = gcd;
}

void dfss(ll i, ll p, ll pa)
{
    ll ans=pa;
    for(auto e:adj[i])
    {
        if(e!=p) 
        {
            ans+=sg[e];
        }
    }
    for(auto e:adj[i])
    {
        if(e!=p) dfss(e,i,ans-sg[e]);
    }
    // cout<<i<<" "<<ans<<"\n";
    maxx=max(ans,maxx);
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
        adj.clear();
        sg.clear();
        parent.clear();
        v.resize(n+1);
        adj.resize(n+1);
        sg.resize(n+1);
        parent.resize(n+1);
        for(ll i=1;i<=n;i++) cin>>v[i];
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        maxx=0;
        dfs(1,-1);
        dfss(1,0,0);
        // cout<<sg[2];
        cout<<maxx<<"\n";
    }   
}