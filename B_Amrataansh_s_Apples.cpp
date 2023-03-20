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
    ll ans=0;
    vector<ll> v(n+1),b(n);
    for(ll i=0;i<n+1;i++) cin>>v[i];
    for(ll i=0;i<n;i++)  cin>>b[i];
    for(ll i=1;i<n+1;i++)
    {
        ll x = min(v[i-1]+v[i],b[i-1]);
        ans+=x;
        ll r=min(v[i-1],x);
        x-=r;
        v[i]-=x;
    }
    cout<<ans<<"\n";
}