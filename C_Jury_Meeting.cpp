#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const ll N = 998244353;

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    vector<ll> fac(200005);
    fac[1]=1;
    fac[0]=1;
    for(ll i=2;i<200005;i++) fac[i]=(fac[i-1]*i)%N;
    while(t--)
    {
        ll n,maxx1=0,maxx2=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i],maxx1=max(maxx1,v[i]);
        for(ll i=0;i<n;i++)
        {
            if(v[i]>maxx2 && v[i]!=maxx1) maxx2=v[i];
        }
        ll c1=0,c2=0;
          
        for(ll i=0;i<n;i++)
        {
            if(v[i]==maxx1) c1++;
            else if(v[i]==maxx2) c2++;
        }
        if(maxx2==0)
        {
            cout<<fac[c1]<<"\n";
            continue;
        }
        else if(maxx1 - maxx2>1)
        {
            cout<<"0\n";
            continue;
        } 
        // cout<<fac[0]<<"\n";
        ll ans = (fac[n-c1]*binpow(n-c1,c1,N) - binpow(c1+c2+1,n-c1-c2-1,N)*fac[c2]*(n-c1-c2))%N;
        cout<<ans<<"\n";
    }   
}
// 1 2 3 3 4 3
// 5!*(5^1) - 5*3!*2
