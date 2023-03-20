#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,t,k;
ll good(ll m)
{
    ll x;
    cout<<"? 1 "<<m<<endl;
    cin>>x;
    return m-x>=k;
}

int main()
{
    FASTIO;
    
    cin>>n>>t>>k;
    ll l=1,r=n;
    while(r>l+1)
    {
        ll mid=(l+r)/2;
        if(good(mid)) r=mid;
        else l=mid;
    }
    cout<<r<<endl;   
}