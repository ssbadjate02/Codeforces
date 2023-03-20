#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
ll n,k;
vector<ll> v;

ll good(ll m)
{
    ll s=0,x=1;
    for(ll i=0;i<n-1;i++)
    {
        // if(v[i]>m) return false;
        if(s>=m) s=0,x++;
        s+=v[i];
    }
    if(s>=m) x++;
    return x>=k;
}

int main()
{
    FASTIO;
    cin>>n>>k;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n-1;i++) v[i]=v[i+1]-v[i];
    ll l=1,r=*max_element(v.begin(),v.end());
    while(r>l+1)
    {
        ll m=(l+r)/2;
        if(good(m)) l=m;
        else r=m;
    }
    if(good(r)) cout<<r<<"\n";
    else cout<<l<<"\n";
}