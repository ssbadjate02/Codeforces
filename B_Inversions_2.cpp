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

// struct item 
// {
//     ll seg,pref,suff,sum;
// };

struct segtree
{
    ll siz;
    vector<ll> v;
    ll NEUTRAL_ELEMENT = 0;

    ll merge(ll a, ll b)
    {
       return a+b;
    }

    ll single(ll v)
    {
        return v;
    }

    void init(ll n)
    {
        siz=1;
        while(siz<n) siz*=2;
        v.resize(2*siz);
    }


    void build(vector<ll>&a, ll x, ll lx, ll rx)
    {
        if(rx-lx==1)
        {
            if(lx<a.size()) v[x]=single(a[lx]);
            return;
        }
        ll m = (lx+rx)/2;
        build(a,2*x+1,lx,m);
        build(a,2*x+2,m,rx);
        v[x] = merge(v[2*x+1],v[2*x+2]);
    }

    void build(vector<ll> &a)
    {
        build(a,0,0,siz);
    }

    void set(ll i, ll val, ll x, ll lx, ll rx)
    {
        if(rx-lx==1)
        {
            v[x] = single(val);
            return;
        }
        ll m = (lx+rx)/2;
        if(i<m) set(i, val, 2*x+1, lx, m);
        else set(i, val , 2*x+2 ,m, rx);
        v[x] = merge(v[2*x+1],v[2*x+2]);
    }

    void  set(ll i, ll x)
    {
        set(i, x, 0, 0, siz);
    }

    ll calc(ll l, ll r, ll x, ll lx, ll rx)
    {
        if(lx>=r || rx<=l) return NEUTRAL_ELEMENT;
        if(lx>=l && rx<=r) return v[x];
        ll m = (lx+rx)/2;
        ll s1 = calc(l,r,2*x+1,lx,m);
        ll s2 = calc(l,r,2*x+2,m,rx);
        return merge(s1,s2);
    } 

    ll calc(ll l, ll r)
    {
        return calc(l,r,0,0,siz);
    }

    ll good(ll sum, ll l, ll n)
    {
        return calc(l,n+1)>sum;
    }
};

int main()
{
    FASTIO;
    ll n;
    cin>>n;
    vector<ll> a(n+1,1),v(n),ans(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    segtree st;
    st.init(n+1);
    st.build(a);
    for(ll i=n-1;i>=0;i--)
    {
        ll l=1,r=n+1;
        while(r>l+1)
        {
            ll m = (l+r)/2;
            if(st.good(v[i],m,n+1)) l=m;
            else r=m;
        }
        st.set(l,0);
        ans[i]=l;
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
}
// 1 1 1 1 1 1