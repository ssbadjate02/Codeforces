#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<pair<ll,ll>> v;
vector<vector<ll>> adj;
vector<vector<ll>> dp(N,vector<ll>(2));

void dfs(ll i)
{
         
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
        v.resize(n);
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[i]={a,b};
        }
        adj.resize(n+1);
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }   
    }   
}