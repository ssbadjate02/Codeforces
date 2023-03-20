#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n),dp(n);
        map<ll,ll> m;
        for(ll i=0;i<n;i++) cin>>v[i],m[v[i]]=0;
        for(ll i=0;i<n;i++)
        {
            if(i!=0) dp[i]=dp[i-1]+m[v[i]];
            m[v[i]]+=i+1;
            ans+=dp[i];
        }
        cout<<ans<<"\n";
    }
}