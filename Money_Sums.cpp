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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<vector<ll>> dp(n+1,vector<ll>(n*1000+1));
    for(ll i=0;i<=n;i++) dp[i][0]=1;
    ll x=n*1000;
    
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=v[i-1]) dp[i][j]|=dp[i-1][j-v[i-1]];
        }
    }
    ll ans=0;
    for(ll i=1;i<=x;i++) ans+=dp[n][i];
    cout<<ans<<"\n";
    for(ll i=1;i<=x;i++) if(dp[n][i]) cout<<i<<" ";
}