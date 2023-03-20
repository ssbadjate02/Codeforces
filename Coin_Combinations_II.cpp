#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N = 1e9+7;
 
vector<ll> dp(1000005); 
vector<ll> v(101);
ll n,x;
 
int main()
{
    FASTIO;
    cin>>n>>x;
    for(ll i=0;i<n;i++) cin>>v[i];
    dp[0]=1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=v[i];j<=x;j++)
        {
            dp[j]=(dp[j]%N+dp[j-v[i]]%N)%N;
        }
    }
    cout<<dp[x];
}