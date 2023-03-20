#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll n,m,k;
    cin>>n>>m>>k;
    set<pair<ll,ll>> s;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        s.insert({a,b});
    }   
    vector<vector<ll>> adj(n+1);
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(i==j) continue;
            if(s.find({i,j})!=s.end() || s.find({j,i})!=s.end()) continue;
            adj[i].pb(j);
            adj[j].pb(i);
        }
    }
    
}