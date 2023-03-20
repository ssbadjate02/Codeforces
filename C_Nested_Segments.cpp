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
            if(rx<l || lx>r) return;
            ll m = (l+r)/2;
            if(rx>r) add(a,l,r,2*x+2,m,rx);
            if(lx<l) add(a,l,r,2*x+1,lx,m);
            if(lx>=l && rx<=r) 
            {
                v[x]+=a;   
            }
        }   

        void add(ll a, ll l, ll r )
        {
            add(a,l,r,0,0,siz);
        }

        ll get(ll i,ll x, ll lx, ll rx)
        {
            if(rx-lx==1) return v[lx];
            ll m = (lx+rx)/2;
            if(i<m) get(i, 2*x+1, lx, m)+v[x];
            else get(i, 2*x+2 ,m, rx)+v[x];
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
        vector<ll> a(2*n,0),v(2*n),vis(n+1,-1),ans(n+1);
        for(ll i=0;i<2*n;i++) cin>>v[i];
        segtree st;
        st.init(2*n);
        st.build(a);
        for(ll i=0;i<2*n;i++)
        {
            if(vis[v[i]]==-1) 
            {
                vis[v[i]]=i;
                st.set(vis[v[i]],1);
                continue;
            }
            ans[v[i]] = st.calc(vis[v[i]],i)-1;
            st.set(vis[v[i]],-1);
            st.set(i,1);
        }
        for(ll i=1;i<=n;i++) cout<<ans[i] <<" ";
    }
    // 1 1 1 1 1 1