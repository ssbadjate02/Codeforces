#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define inf 1e9+7
#define ff first
#define ss second
ll n;
vector<pair<ll,ll>> v(105);
vector<vector<vector<ll>>> dp(101, vector<vector<ll>>(201, vector<ll>(1000,inf+1)));
ll f(ll i,ll w,ll t)
{
    if(i==n && w>t) return inf;
    if(i==n && w<=t) return t;
    // ll ans=inf;
    if(dp[i][t][w]!=(inf+1)) return dp[i][t][w];
    if(w+v[i].ss<=300) dp[i][t][w]=min(f(i+1,w+v[i].ss,t),f(i+1,w,t+v[i].ff));
    else dp[i][t][w]=f(i+1,w,t+v[i].ff);
    // calc[i]=1;
    return dp[i][t][w];
}

int main()
{
    FASTIO;   
    cin>>n;
    for(ll i=0;i<n;i++) cin>>v[i].ff>>v[i].ss;
    cout<<f(0,0,0);
}