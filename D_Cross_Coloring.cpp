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

ll binpow(ll x, ll p, ll m)
{
    if(!p)
        return 1;
    ll res = binpow(x, p / 2,m);
    res *= res;
    res %= m;
    if(p & 1)
        res *= x;
    return res % m;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,q,diff=0;
        cin>>n>>m>>k>>q;
        vector<ll> x(q),y(q);
        for(ll i=0;i<q;i++) cin>>x[i]>>y[i];
        set<ll> c,r;
        for(ll i=q-1;i>=0;i--)
        {
            // ll a,b;
            // cin>>a>>b;
            if(r.find(x[i])==r.end() || c.find(y[i])==c.end()) diff++;
            r.insert(x[i]);
            c.insert(y[i]);
            if(r.size()==n || c.size()==m) break;
        }
        // if(diff>max(n,m)) diff=max(n,m);
        cout<<binpow(k,diff,998244353)<<"\n";
    }   
}