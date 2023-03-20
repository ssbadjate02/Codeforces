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

ll n;
vector<vector<ll>> adj;
vector<ll> a,ans;
vector<ll> b;
vector<ll>bb;

void dfs(ll i, ll sum,ll p)
{
    ll l = 0;
    if(bb.size()) l = *bb.rbegin();
    bb.push_back( l+ b[i]);
    ans[i] = (upper_bound(all(bb),sum+a[i]) - bb.begin()) - 1;
    for(auto e:adj[i])
    {
        if(e!=p)
        {
            dfs(e,sum+a[i],i);
        }
    }
    bb.pop_back();
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bb.clear();
        adj.clear();
        adj.resize(n+1);
        a.clear();
        a.resize(n+1,0);
        b.clear();
        b.resize(n+1,0);
        ans.clear();
        ans.resize(n+1,0);

        for(ll i=2;i<=n;i++)
        {
            ll x;
            cin>>x>>a[i]>>b[i];
            adj[i].pb(x);
            adj[x].pb(i);
        }
        dfs(1ll,0,-1);
        for(ll i=2;i<=n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }   
}