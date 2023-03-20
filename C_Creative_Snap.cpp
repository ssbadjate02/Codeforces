#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,h,l,r;
vector<ll> v(2005);
vector<vector<ll>> dp(2005,vector<ll>(2005));
ll f(ll i,ll s)
{
    if(dp[i][s%h]!=-1)
    if(i==n) return 0;
    if(dp[s]!=-1) return dp[i][s%h];
    ll ans;
    if(((s+v[i])%h)<=r && (s+v[i])%h>=l) ans=f(i+1,s+v[i])+1;
    else ans=f(i+1,s+v[i]);
    if((s+v[i]-1)%h<=r && (s+v[i]-1)%h>=l) ans=max(f(i+1,s+v[i]-1)+1,ans);
    else ans=max(ans,f(i+1,s+v[i]-1));
    return dp[i][s%h]=ans;
}

int main()
{
    FASTIO;
    cin>>n>>h>>l>>r;
    ll s=0;
    for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];
    cout<<f(0,0);
}