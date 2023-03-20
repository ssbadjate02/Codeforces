#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll x,y,a,b;

int good(ll m)
{
    ll u=floor((double)(x-b*m)/(double)(a-b));
    ll v=ceil((double)(y-a*m)/(double)(b-a));
    if(max(0ll,v)<=min(m,u)) return 1;
    return 0;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        if(a==b)
        {
            cout<<min(x,y)/a<<"\n";
            continue;
        }
        if(a<b) swap(a,b);
        ll l=0,r=1e9+7;
        while(r>l+1)
        {
            ll m=(r+l)/2;
            if(good(m)) l=m;
            else r=m;
        }
        cout<<l<<"\n";
    }   
}