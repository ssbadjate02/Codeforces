#include<bits/stdc++.h>
using namespace std;
#define ll int
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const ll N = 1e9+7;
vector<ll> d,vis,adj;
vector<ll> m;
ll dfs(ll i)
{
    ll f=0;
    if(m[i]) f=1;
    if(vis[i]) return f;
    vis[i]=1;
    return max(dfs(adj[i]),f);
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
        vector<ll> a(n),b(n);
        adj.clear();
        adj.resize(n+1);
        vis.clear();
        vis.resize(n+1);
        d.resize(n);
        m.clear();
        m.resize(n+1);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++) cin>>d[i],m[d[i]]=1;
        for(ll i=0;i<n;i++)
        {
            adj[a[i]]=b[i];
        }
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
            if(!vis[i] && adj[i]!=i)
            {
                ll f=dfs(i);
                if(!f)ans=(ans*2)%N;
            }
        }
        cout<<ans<<"\n";
    }
}   