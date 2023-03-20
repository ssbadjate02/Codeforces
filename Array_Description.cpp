#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=1e9+7;

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<vector<ll>> dp(n,vector<ll>(m+1));
    if(v[0]==0) for(ll j=1;j<=m;j++) dp[0][j]=1;
    else dp[0][v[0]]=1;
    for(ll i=1;i<n;i++)
    {
        if(v[i]!=0)
        {
            dp[i][v[i]]+=(dp[i-1][v[i]-1]+dp[i-1][v[i]]);
            if(v[i]!=m) dp[i][v[i]]+=dp[i-1][v[i]+1];
            dp[i][v[i]]%=N;
        }
        else
        {
            for(ll j=1;j<=m;j++)
            {
                dp[i][j]+=(dp[i-1][j-1]+dp[i-1][j]);
                if(j!=m) dp[i][j]+=dp[i-1][j+1];
                dp[i][j]%=N;
            }
        }
    }
    ll ans=0;
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<=m;j++) cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }
    for(ll i=1;i<=m;i++) ans+=dp[n-1][i],ans%=N;
    cout<<ans<<"\n";
}