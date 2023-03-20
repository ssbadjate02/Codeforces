#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=1e9+7;

ll n;
vector<vector<ll>> dp;//(505,vector<ll>(250005,-1));
ll sum;

ll f(ll i,ll s)
{
    if(i==n+1) return 0;
    if(2*s==sum) return 1;
    if(2*s>sum) return 0;
    if(dp[i][s]!=-1) return dp[i][s];
    return dp[i][s]=(f(i+1,s)%N+f(i+1,s+i)%N)%N;
}

int main()
{
    FASTIO;
    cin>>n;
    sum=n*(n+1)/2;  
    dp.resize(n+1,vector<ll>(sum/2+5,-1));
    cout<<f(1,0); 
}