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
    int n,m;
    cin>>n>>m;
    int ans=1;
    vector<int> dp(n+1),sum(n+1);
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        // sum[i]=2*dp[i-1]-2;
        dp[i]=((2*dp[i-1])%m+(i-i/2-1)%m)%m;
        for(int j=2;j*j<=i;j++)
        {
            dp[i]=(dp[i]%m+dp[j]*(i/j - i/(j+1))%m)%m;
            int x=j,u=i/j;
            if(u>sqrt(i))dp[i]=(dp[i]%m+dp[u]%m)%m;
        }
    }   
    cout<<dp[n]<<"\n";
}