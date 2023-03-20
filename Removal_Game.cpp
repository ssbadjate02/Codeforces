#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
ll n;
vector<ll> v(5005);

vector<vector<ll>> dp(5005,vector<ll>(5005,-1));

ll f(ll i, ll j)
{
    if(i==j) return v[i];
    if(i+1==j) return max(v[i],v[j]);
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max(v[i]+min(f(i+2,j),f(i+1,j-1)),v[j]+min(f(i+1,j-1),f(i,j-2)));
}

int main()
{
    FASTIO;
    cin>>n;
    // v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i]; 
    cout<<f(0,n-1);
}