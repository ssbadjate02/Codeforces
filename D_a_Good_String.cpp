#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

// vector<vector<ll>> dp;

ll f(char c,ll n,string s)
{
    // if(dp[n][c-'a']!=1e9+7) return dp[n][c-'a'];
    if(n==1) return (s[0]!=c);
    ll x=0,y=0;
    for(ll i=0;i<n/2;i++)
    {
        x+=(s[i]!=c);
    }
    // dp[n][c-'a']=min(dp[n][c-'a'],x+f(c+1,n/2,s.substr(n/2,n/2)));
    // x=0;
    for(ll i=n/2;i<n;i++) y+=(s[i]!=c);
    // dp[n][c-'a']=min(dp[n][c-'a'],x+f(c+1,n/2,s.substr(0,n/2)));
    // return dp[n][c-'a'];
    // cout<<n<<"\n";
    return min(x+f(c+1,n/2,s.substr(n/2,n/2)),y+f(c+1,n/2,s.substr(0,n/2)));
    
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       string s;
       cin>>s;
    //    dp.clear();
    //    dp.resize(n+1,vector<ll>(26,1e9+7));
       cout<<f('a',n,s)<<"\n";
    }   
}