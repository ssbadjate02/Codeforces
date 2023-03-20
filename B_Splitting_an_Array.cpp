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
    ll sum=0,x=1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>m) return 0;
        sum+=v[i];
        if(sum>m)
        {
            x++;
            sum=v[i];
        }
    }
    return x<=k;
}

int main()
{
    FASTIO;
    cin>>n>>k;
    ll s=0;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];
    ll l=*max_element(v.begin(),v.end()),r=s;
    while(r>l+1)
    {
        ll m=l+(r-l)/2;
        if(good(m)) r=m;
        else l=m;
    }
    if(good(l)) cout<<l<<"\n";
    else cout<<r<<"\n";
}