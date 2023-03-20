#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll good(ll m,ll s, ll n)
{
    ll x=ceil(double(n)/(double)(2));
    if((n-x+1)*m<=s) return 1;
    return 0;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll l=0,r=1e9+7;
        while(r>l+1)
        {
            ll m=(r+l)/2;
            if(good(m,s,n)) l=m;
            else r=m;
        }
        cout<<l<<"\n";
    }   
}