#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) ll(x.size()) 

ll N = 1e9+7;

ll n;
vector<ll> dp;
ll f(ll s)
{
    if(s==n) return 1;
    if(s>=n) return 0;
    dp[s]=0;
    if(dp[s+1]!=-1) dp[s]+=dp[s+1];
    else dp[s]+=f(s+1);
    if(dp[s+2]!=-1) dp[s]+=dp[s+2];
    else dp[s]+=f(s+2);
    if(dp[s+3]!=-1) dp[s]+=dp[s+3];
    else dp[s]+=f(s+3);
    if(dp[s+4]!=-1) dp[s]+=dp[s+4];
    else dp[s]+=f(s+4);
    if(dp[s+5]!=-1) dp[s]+=dp[s+5];
    else dp[s]+=f(s+5);
    if(dp[s+6]!=-1) dp[s]+=dp[s+6];
    else dp[s]+=f(s+6);
    // ans+=f(s+1)+f(s+2)+f(s+3)+f(s+4)+f(s+5)+f(s+6);
    dp[s]=dp[s]%N;
    return dp[s];

}

int main()
{
    FASTIO;
    cin>>n;
    dp.clear();
    dp.resize(n+8,-1);
    cout<<f(0);
    // cout<<ans;
}