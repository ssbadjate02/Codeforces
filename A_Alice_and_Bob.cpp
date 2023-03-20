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

int main()
{
    FASTIO;
    ll n,gcd=-1,maxx=-1;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(i==0) gcd=x;
        else
        {   
            gcd = __gcd(x,gcd);
        }
        maxx = max(x,maxx);
    }
    cout<<((maxx/gcd-n)%2?"Alice\n":"Bob\n");
}