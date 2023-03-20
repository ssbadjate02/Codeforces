#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N = 1e9+7;

int main()
{
    FASTIO;
    ll n;
    cin>>n;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<vector<ll>> dp(n+1,vector<ll>(n+1));
    if(v[0][0]!='*')dp[0][0]=1;
    else
    {
        cout<<0;
        return 0;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(v[i][j]!='*')
            {  
                if(i>=1) dp[i][j]+=dp[i-1][j];
                if(j>=1) dp[i][j]+=dp[i][j-1];
                dp[i][j]=dp[i][j]%N;
            }
        }
    }
    cout<<dp[n-1][n-1];   
}