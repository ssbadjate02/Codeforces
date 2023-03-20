#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n;
ll k;

ll good(ll m)
{
    if((n-m+1)*(n-m+2)/2-1>=ceil((double)k/(double)2)) return 1;
    return 0;
}

int main()
{
    FASTIO;
    cin>>n;
    k=n*(n+1)/2-1;
    ll l=1,r=n;
    while(r>l+1)
    {
        ll m=(l+r)/2;
        if(good(m)) l=m;
        else r=m;
    } 
    cout<<l<<" "<<r<<"\n";  
    if(good(r)) cout<<r;
    else cout<<l;
}