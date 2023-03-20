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

template<const int& MOD>
struct Modint {
    using T = typename decay<decltype(MOD)>::type; T v;
    Modint(): v(0) {}
    template<typename U, typename = enable_if_t<is_integral<U>::value>>
    Modint(U v) { if (v < 0) v = v % MOD + MOD; if (v >= MOD) v %= MOD; this->v = static_cast<T>(v); }
    template<typename U, typename = enable_if_t<is_integral<U>::value>>
    explicit operator U() const { return static_cast<U>(v); }
    friend istream& operator>>(istream& in, Modint& m) { int64_t v_; in >> v_; m = Modint(v_); return in; }
    friend ostream& operator<<(ostream& os, const Modint& m) { return os << m.v; }
    static T inv(T a, T m) {
        T g = m, x = 0, y = 1;
        while (a != 0) {
            T q = g / a;
            g %= a; swap(g, a);
            x -= q * y; swap(x, y);
        } return x < 0 ? x + m : x;
    }
    static unsigned fast_mod(uint64_t x, unsigned m = MOD) {
#if !defined(_WIN32) || defined(_WIN64)
        return unsigned(x % m);
#endif // x must be less than 2^32 * m
        unsigned x_high = unsigned(x >> 32), x_low = unsigned(x), quot, rem;
        asm("divl %4\n" : "=a" (quot), "=d" (rem) : "d" (x_high), "a" (x_low), "r" (m));
        return rem;
    }
    Modint inv() const { return Modint(inv(v, MOD)); }
    Modint operator-() const { return Modint(v ? MOD - v : 0); }
    Modint& operator++() { v++; if (v == MOD) v = 0; return *this; }
    Modint& operator--() { if (v == 0) v = MOD; v--; return *this; }
    Modint operator++(int) { Modint a = *this; ++* this; return a; }
    Modint operator--(int) { Modint a = *this; --* this; return a; }
    Modint& operator+=(const Modint& o) { v += o.v; if (v >= MOD) v -= MOD; return *this; }
    Modint& operator-=(const Modint& o) { v -= o.v; if (v < 0) v += MOD; return *this; }
    Modint& operator*=(const Modint& o) { v = fast_mod(uint64_t(v) * o.v); return *this; }
    Modint& operator/=(const Modint& o) { return *this *= o.inv(); }
    friend Modint operator+(const Modint& a, const Modint& b) { Modint res = a; res += b; return res; }
    friend Modint operator-(const Modint& a, const Modint& b) { Modint res = a; res -= b; return res; }
    friend Modint operator*(const Modint& a, const Modint& b) { Modint res = a; res *= b; return res; }
    friend Modint operator/(const Modint& a, const Modint& b) { Modint res = a; res /= b; return res; }
    friend bool operator==(const Modint& a, const Modint& b) { return a.v == b.v; }
    friend bool operator!=(const Modint& a, const Modint& b) { return a.v != b.v; }
    friend bool operator<(const Modint& a, const Modint& b) { return a.v < b.v; }
    friend bool operator>(const Modint& a, const Modint& b) { return a.v > b.v; }
    friend bool operator<=(const Modint& a, const Modint& b) { return a.v <= b.v; }
    friend bool operator>=(const Modint& a, const Modint& b) { return a.v >= b.v; }
    Modint operator^(int64_t p) {
        if (p < 0) return inv() ^ -p;
        Modint a = *this, res{ 1 }; while (p > 0) {
            if (p & 1) res *= a;
            p >>= 1; if (p > 0) a *= a;
        } return res;
    }
};
const int mod = 998244353;
using mint = Modint<mod>;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mx=1e4+10;
        mint ans=0;
        cin>>n;
        vector<ll> v(n);
        for(auto &i:v) cin>>i;
        map<vector<ll>,ll> m;
        sort(all(v));
        for(ll i=0;i<n;i++)
        {
            for(auto e:m)
            {
                ll a = e.first[0];
                ll b = e.first[1];
                ll c = e.second ;
                if(a>v[i] && b==2) ans+=c;
                // cout<<a+v[i]<<"\n";
            }
            auto temp = m;
            for(auto e:temp)
            {
                ll a = e.first[0];
                ll b = e.first[1];
                ll c = e.second;
                m[{min(a+v[i],mx),2}]+=c;
            }
            m[{v[i],1}]+=1;
        }
        cout<<ans<<"\n";
    }   
}