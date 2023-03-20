#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int  N = 1e9+7;

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<vector<ll>> dp(n,vector<ll>(m));
    dp[0][0]=1;
    // cout<<"1\n";
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='#') continue;
            if(i==0 && j==0) continue;
            else if(i==0) dp[i][j]+=dp[i][j-1];
            else if(j==0) dp[i][j]+=dp[i-1][j];
            else dp[i][j]+=(dp[i-1][j]+dp[i][j-1]);
            dp[i][j]%=(N);
        }
    }
    // cout<<"1\n";
    cout<<dp[n-1][m-1];
}