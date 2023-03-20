#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb 
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        string s;
        cin>>s;
        ll n=s.size();
        vector<vector<ll>> dp(n,vector<ll>(2,0));

        if(s[0]!='?')dp[0][s[0]-'0']=1;
        else dp[0][0]=1,dp[0][1]=1;
        ans++;
        for(ll i=1;i<n;i++)
        {
            if(s[i]!='?') dp[i][s[i]-'0']=dp[i-1][!(s[i]-'0')]+1;
            else dp[i][1]=dp[i-1][0]+1,dp[i][0]=dp[i-1][1]+1;
            ans+=max(dp[i][0],dp[i][1]);
        }
        cout<<ans<<"\n";    
    }   
}