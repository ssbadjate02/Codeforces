#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7


ll n,x;


int main()
{
    FASTIO;
    cin>>n>>x;
    vector<ll> v(n);
    vector<ll> dp(x+1,1e9+7);
    for(ll i=0;i<n;i++) cin>>v[i];
    if(*min_element(v.begin(),v.end()>x))
    {
        cout<<"-1";
        return 0;
    }
    for(ll i=0;i<n;i++) dp[v[i]]=1;
    for(ll i=0;i<x;i++)
    {
        if(dp[i]!=1e9+7)
        {
            for(ll j=0;j<n;j++)
            {
                if(i+v[j]<=x) dp[i+v[j]]=min(dp[i+v[j]],dp[i]+1);
            }
        }
    }
    if(dp[x]!=1e9+7) cout<<dp[x];
    else cout<<"-1";
}
