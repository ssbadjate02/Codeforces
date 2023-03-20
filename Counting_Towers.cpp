#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=1e9+7;
vector<vector<ll>> dp(1000005,vector<ll>(2));
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        dp[1][1]=1;
        dp[1][0]=1;
        for(ll i=2;i<=n;i++)
        {
            dp[i][0]=4*dp[i-1][0]+dp[i-1][1];
            dp[i][1]=dp[i-1][0]+2*dp[i-1][1];
            dp[i][0]%=N;
            dp[i][1]%=N;
        }
        cout<<(dp[n][0]+dp[n][1])%N<<"\n";
    }   
}