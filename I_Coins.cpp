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
    vector<double> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<vector<double>> dp(n+1,vector<double>(n+1));
    dp[0][0]=1;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            if(!j) dp[i][j]=dp[i-1][j]*(1-v[i-1]);
            else
            {
                dp[i][j]=dp[i-1][j]*(1-v[i-1]) + dp[i-1][j-1]*(v[i-1]);
            }
        }
    }
    double ans=0;
    for(ll i=n/2+1;i<=n;i++) ans+=dp[n][i];
    cout<<setprecision(20)<<ans<<"\n";   
}