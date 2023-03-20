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

    void set(ll i, ll x)
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

    void add(ll a,ll l, ll r, ll x, ll lx, ll rx)
    {
        if(rx<=l || lx>=r) return;
        if(lx>=l && rx<=r) 
        {
            v[x]+=a;   
            return;
        }
        if(rx-lx==1) return;
        ll m = (lx+rx)/2;
        add(a,l,r,2*x+1,lx,m);
        add(a,l,r,2*x+2,m,rx);
    }   

    void add(ll a, ll l, ll r )
    {
        add(a,l,r,0,0,siz);
    }

    ll get(ll i,ll x, ll lx, ll rx)
    {
        if(rx-lx==1) return v[x];
        ll m = (lx+rx)/2;
        if(i<m) return get(i, 2*x+1, lx, m)+v[x];
        else return get(i, 2*x+2 ,m, rx)+v[x];
    }

    ll get(ll i)
    {
        return get(i,0,0,siz);
    }

};

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n,0);
    segtree st;
    st.init(n);
    st.build(a);
    for(ll i=0;i<m;i++)
    {
        ll o;
        cin>>o;
        if(o==1)
        {
            ll l,r,v;
            cin>>l>>r>>v;
            st.add(v,l,r);
        }
        else
        {
            ll i;
            cin>>i;
            cout<<st.get(i)<<"\n";
        }
    }
    // for(ll i=0;i<15;i++)
    // {
    //     cout<<st.v[i]<<" ";
    // }
}

/*       0
        / \
       0    0
      / \   / \
     3  4  0   0
    /\  /\  /\  /\
    0 0 3 0 0 0 0 0


*/