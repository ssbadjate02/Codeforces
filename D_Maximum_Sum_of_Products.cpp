#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n;
vector<ll>a,b;
vector<vector<ll>> dp;
int f()

int main()
{
    FASTIO;
    ll x=0,ans=0;
    cin>>n;
    a.resize(n);
    b.resize(n);
    dp.resize(n,vector<ll> n)
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) x+=a[i]*b[i];
    for(ll i=0;i<n;i++) dp[i][i]=x;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            d[i][j]=dp[i][j-1 ]
        }
    }
}