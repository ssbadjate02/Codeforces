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

struct item 
{
    ll seg,pref,suff,sum;
};

struct segtree
{
    ll siz;
    vector<item> v;
    item NEUTRAL_ELEMENT = {0,0,0,0};

    item merge(item a, item b)
    {
        return{
            max({a.seg, b.seg, a.suff+b.pref}),
            max(a.pref, a.sum+b.pref),
            max(b.suff,b.sum+a.suff),
            a.sum+b.sum
        };
    }

    item single(ll v)
    {
        if(v>0) return {v,v,v,v};
        else return {0,0,0,v};
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

    item calc(ll l, ll r, ll x, ll lx, ll rx)
    {
        if(lx>=r || rx<=l) return NEUTRAL_ELEMENT;
        if(lx>=l && rx<=r) return v[x];
        ll m = (lx+rx)/2;
        item s1 = calc(l,r,2*x+1,lx,m);
        item s2 = calc(l,r,2*x+2,m,rx);
        return merge(s1,s2);
    } 

    item calc(ll l, ll r)
    {
        return calc(l,r,0,0,siz);
    }
};

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    segtree st;
    st.init(n);
    st.build(a);
    cout<<st.calc(0ll,(ll)a.size()).seg<<"\n";
    for(ll i=0;i<m;i++)
    {
        ll j,v;
        cin>>j>>v;
        st.set(j  ,v);
        cout<<st.calc(0ll,(ll)a.size()).seg<<"\n";
        
    }
} 

int main()
{
    FASTIO;
    
}