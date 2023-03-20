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
        ll n;
        map<ll,ll> m;
        m[0]=0;
        cin>>n;
        vector<ll> v(2*n);
        for(ll i=0;i<2*n;i++) cin>>v[i];
        ll diff=0;
        for(ll i=n;i<2*n;i++)
        {
            diff+=(v[i]-3*(v[i]==2));
            if(m.find(diff)==m.end()) m[diff]=i-n+1;
        }
        ll curr=0;
        ll ans=1e9+7;
        diff=0;
        for(ll i=0;i<2*n;i++)
        {
            diff+=(v[i]-3*(v[i]==2));
        }
        // cout<<diff<<" ";
        if(m.find(diff)!=m.end()) ans=m[diff];
        for(ll i=n-1;i>=0;i--)
        {
            curr+=(v[i]-3*(v[i]==2));
            if(m.find(diff-curr)!=m.end()) 
            {
                ans=min(ans,n-i+m[diff-curr]);
            }
        }
        cout<<ans<<"\n"; 

    }
}