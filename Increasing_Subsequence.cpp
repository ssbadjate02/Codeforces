#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
const int inf=1e9+7;

int main()
{
    FASTIO;
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<ll> dp(n+1, inf);
    dp[0] = -inf;
    for (ll i = 0; i < n; i++) {
        ll j = upper_bound(dp.begin(), dp.end(), v[i]) - dp.begin();
        if (dp[j-1] < v[i])
            dp[j] = v[i];
    }

    ll ans = 0;
    for (ll i = 0; i <= n; i++) {
        if (dp[i] < inf)
            ans = i;
    }
    cout<<ans<<"\n";
}