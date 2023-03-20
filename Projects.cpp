#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n;
vector<ll> a,b,p;

int main()
{
    FASTIO;   
    for(ll i=0;i<n;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        a.pb(x);
        b.pb(y);
        p.pb(z);
    }
    vector<ll> dp(n+1,1e9+7);
    dp[0]=-1e9-7;
    for(ll i=0;i<n;i++)
    {
        
    }
}