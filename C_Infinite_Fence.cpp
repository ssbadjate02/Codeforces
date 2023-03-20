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
        ll r,b,k;
        cin>>r>>b>>k;
        ll g=__gcd(r,b);
        r/=g;
        b/=g;
        if(b>r) swap(b,r); 
        ((k-1)*b+1>=r)? cout<<"OBEY\n" : cout<<"REBEL\n";
    }   
}