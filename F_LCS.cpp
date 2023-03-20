#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,m;
string a,b;

vector<vector<ll>> dp(3005,vector<ll>(3005,-1));
string ans="";
ll f(ll i,ll j)
{
    if(i==n) return 0;
    if(j==m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i]==b[j]) dp[i][j]=f(i+1,j+1)+1;
    dp[i][j]=max({dp[i][j],f(i+1,j),f(i,j+1)});
    return dp[i][j];
}

int main()
{
    FASTIO;
    cin>>a>>b;
    n=a.size();
    m=b.size();
    ll x=f(0,0);
    // cout<<x<<"\n";
    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]==b[j]) ans+=a[i],i++,j++;
        else if(dp[i+1][j]>dp[i][j+1]) i++;
        else j++;
    }
    cout<<ans<<"\n";
}