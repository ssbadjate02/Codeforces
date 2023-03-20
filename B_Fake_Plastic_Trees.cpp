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

ll n,ans=0;
vector<vector<ll>> adj;
vector<ll>l,r;
ll dfs(ll i)
{
    ll sum=0;
    for(auto e:adj[i])
    {
        sum+=dfs(e);
    }
    if(sum<l[i]) ans++,sum=r[i];
    return min(r[i],sum);
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        adj.clear();
        adj.resize(n+1);
        l.clear();
        l.resize(n+1);
        r.clear();
        r.resize(n+1);
        for(ll i=2;i<=n;i++)
        {
            ll a;
            cin>>a;
            adj[a].push_back(i);
        }
        for(ll i=1;i<=n;i++) cin>>l[i]>>r[i];
        dfs(1);
        cout<<ans<<"\n";
    }   
}