#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

string a,b;
ll n,m;
vector<vector<ll>> dp(5005,vector<ll>(5005,-1));
ll f(ll i, ll j)
{
    if(i==n) return abs(m-j);
    if(j==m) return abs(n-i);
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=min({f(i+1,j+1)+(a[i]!=b[j]),f(i+1,j)+1,f(i,j+1)+1});
    return dp[i][j];
}

int main()
{
    FASTIO;
    cin>>a>>b;
    n=a.size();
    m=b.size();
    cout<<f(0,0)<<"\n";
}