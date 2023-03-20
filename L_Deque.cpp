#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,s=0;
vector<ll> v;
vector<vector<ll>> dp;
ll f(ll i,ll j)
{
    if(i>=j) return v[i];
    if(i+1==j) return max(v[i],v[j]);
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=max(min(f(i+2,j),f(i+1,j-1))+v[i],min(f(i,j-2),f(i+1,j-1))+v[j]);
}

int main()
{
    FASTIO;
    cin>>n;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];
    dp.resize(n+1,vector<ll>(n+1,-1));
    cout<<2*f(0,n-1)-s;

}   