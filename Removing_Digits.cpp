#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt 
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> dp(1000005,-1);
ll n;

ll f(ll i)
{
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    ll j=i;
    ll minn=1e9+7;
    while(j!=0)
    {
        ll r=j%10;
        if(r!=0) minn=min(minn,f(i-r)+1);
        j/=10;
    }
    return dp[i]=minn;
}

int main()
{
    FASTIO;
    cin>>n;
    cout<<f(n);
}