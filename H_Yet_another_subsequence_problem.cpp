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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    vector<ll> dp(n),p(n);
    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
        if(m.find(v[i]-1)!=m.end())
        {
            dp[i]=dp[m[v[i]-1]]+1;
            p[i]=m[v[i]-1];
            m[v[i]]=i;
        }
        else m[v[i]]=i,dp[i]=1;
    }   
    ll ans=0,ansi=0;
    for(ll i=0;i<n;i++)
    {
        // cout<<dp[i]<<" ";
        if(dp[i]>ans)
        {
            ans=dp[i];
            ansi=i;
        }
    }
    cout<<ans<<"\n";
    vector<ll> path;
    for(ll i=0;i<ans;i++)
    {
        path.pb(ansi);
        ansi=p[ansi];
    }
    // path.pb(ansi);
    reverse(path.begin(),path.end());
    for(ll i=0;i<path.size();i++) cout<<path[i]+1<<" ";
}