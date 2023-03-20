#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll knapSack(ll W, vector<ll>&wt, vector<ll>&val, ll n)
{
    // making and initializing dp array
    ll dp[W + 1];
    memset(dp, 0, sizeof(dp));
 
    for (ll i = 1; i < n + 1; i++) {
        for (ll w = W; w >= 0; w--) {
 
            if (wt[i - 1] <= w)
                // finding the maximum value
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W]; // returning the maximum value of knapsack
}

// ll knapSack() 
// { 
//     vector<vector<ll>> dp(n+1,vector<ll>(w+1,0));
//     for(ll i=1;i<=n;i++)
//     {
//         for(ll j=0;j<=w;j++)
//         {
//             dp[i][j]=dp[i-1][j];
//             if(j-wt[i-1]>=0)dp[i][j]=max(dp[i][j],dp[i-1][j-wt[i-1]]+val[i-1]);
//         }
//     }
//     return dp[n][w];
// }

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    vector<ll> v(1001,1e9+7);
    v[1]=0;
    v[2]=1;
    v[3]=2;
    v[4]=2;
    for(ll i=5;i<1001;i++)
    {
        for(ll j=1;j<i;j++)
        {
            ll x=i-j;
            for(ll k=1;k<=x;k++)
            {
                if(x/k==j)
                {
                    v[i]=min(v[x]+1,v[i]);
                }
            }
        }
    }

    // for(ll i=1;i<=20;i++)
    // {
    //     cout<<i<<" "<<v[i]<<"\n";
    // }
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> b(n),c(n),w(n);
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++) cin>>c[i];
        for(ll i=0;i<n;i++) w[i]=v[b[i]];
        cout<<knapSack(k,w,c,n)<<"\n";
    }

}