#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())

ll N = 1e9+7;

int power(ll x,ll y)
{
    ll res = 1;
 
    x=x%N;
   if(x==0) return 0;
 
    while(y>0)
    {
        if(y&1)
            res=(res*x)%N;
        y = y>>1;
        x = (x*x)%N;
    }
    return res;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll s=0;
        ll j=1;
        s=((x%N)*((power(2,n)-1)%N))%N; 
        cout<<s<<"\n";
    }   
}