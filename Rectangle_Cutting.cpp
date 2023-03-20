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
    ll a,b;
    cin>>a>>b;
    if(a==1 || b==1)
    {
        cout<<max(a,b)-1;
        return 0;
    }
    vector<vector<ll>> dp(a+1,vector<ll>(b+1,1e9+7));
    dp[1][1]=0;
    dp[1][2]=1;
    dp[2][1]=1;
    
    for(ll i=2;i<=a;i++)
    {
        for(ll j=2;j<=b;j++)
        {
            if(i==j) dp[i][j]=0;
            for(ll k=1;k<j;k++) dp[i][j]=min(dp[i][j],dp[i][k] + dp[i][j-k] + 1);
            for(ll k=1;k<i;k++) dp[i][j]=min(dp[i][j],dp[k][j] + dp[i-k][j]+1);
        }
    }   
    cout<<dp[a][b];
}