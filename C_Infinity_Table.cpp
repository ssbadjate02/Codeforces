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
    vector<ll> v;
    ll x=1;
    for(ll i=1;x<10000000007;i++)
    {
        v.pb(x);
        x+=(2*i-1);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l=lower_bound(v.begin(),v.end(),n)-v.begin();
        l-=(v[l]!=n);
        // cout<<l<<" ";
        ll m=(v[l+1]-v[l])/2+1;
        ll j=l-max(0ll,n-(v[l]+m-1))+1,i=min(m,n-v[l]+1);
        cout<<i<<" "<<j<<"\n";
    }   
}