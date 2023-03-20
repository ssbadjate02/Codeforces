#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) cin>>v[i].ff;
    for(ll i=0;i<n;i++) cin>>v[i].ss;
    vector<ll> dp(x+1,0);
    bitset<200005> b;   
    b[0]=1;
    for (int i:v)
    b|=(b<<i);
    return b[s/2];
    cout<<dp[x];
}