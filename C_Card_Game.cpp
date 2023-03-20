#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}


long long power(long long x, int y, int p)
{
    unsigned long long res = 1; 
    x = x % p; 
 
    while (y > 0)
    {
     
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
 
long long modInverse(long long n, int p)
{
    return power(n, p - 2, p);
}
 
long long nCrModPFermat(long long n, int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
 
    long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

int main()
{
    FASTIO;
    ll p = 998244353;
    ll t;
    cin>>t;
    vector<ll>a(65),b(65);
    a[2] = 1;
    b[2] = 0;
    for(ll i=4;i<=64;i+=2)
    {
        a[i] = (nCrModPFermat(i-1,i/2,p) + b[i-2])%p;
        b[i] = (nCrModPFermat(i,i/2,p) - a[i] -1 + p)%p;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<a[n]<<" "<<b[n]<<" 1"<<"\n"; 
    }
}
