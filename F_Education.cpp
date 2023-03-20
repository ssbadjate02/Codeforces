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
        ll n,c;
        cin>>n>>c;
        vector<ll> a(n),b(n-1);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n-1;i++) cin>>b[i];
        ll ans=1e15,rem=0,day=0;
        for(ll i=0;i<n;i++)
        {
            ans=min(ans,day+max(0ll,(c-rem-1+a[i]))/a[i]);
            day+=max(0ll,(b[i]-rem-1+a[i]))/a[i]+1;
            rem+=max(0ll,(b[i]-rem-1+a[i]))/a[i]*a[i]-b[i];
        }
        cout<<ans<<"\n";
    }   
}