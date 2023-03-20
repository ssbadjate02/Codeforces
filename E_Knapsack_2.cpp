#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const ll N=1e15;

ll n,w;
vector<ll> v(1001),wt(1001);

vector<ll> dp(100005,N);

int main()
{
    FASTIO;
    cin>>n>>w;
    for(ll i=0;i<n;i++) cin>>wt[i]>>v[i];
    dp[0]=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=100001;j>=0;j--)
        {
            if(j>=v[i-1]) dp[j]=min(dp[j],wt[i-1]+dp[j-v[i-1]]);
        }
    }
    ll ans=0;
    for(ll i=0;i<dp.size();i++)
    {
        if(dp[i]<=w)
        {
            ans=max(ans,i);
        }
    }
    cout<<ans<<"\n";
}