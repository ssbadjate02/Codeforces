/***************************************************

@author: vichitr
Compiled On: 04th Dec 2020

*****************************************************/
#include<bits/stdc++.h>
#define MAX 9223372036854775807
#define endl "\n"
#define ll long long
#define int long long
// #define double long double
#define pb push_back
#define pf pop_front
#define mp make_pair
#define ip pair<int, int>
#define F first
#define S second

#define loop(i,n) for(int i=0;i<n;i++)
#define loops(i,s,n) for(int i=s;i<=n;i++)
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_updat
// using namespace __gnu_pbds;
// typedef tree<ip, null_type, less_equal<ip>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).

const ll MOD = 1e9+7;
// const ll SZ = 107;
const ll N = 1e6+7;
// const ll M = 2e5+7;

ll pwr(ll x, ll y)
{
    ll r = 1LL;
    while(y)
    {
        if(y&1)
            r = (r * x) % MOD;
        y >>= 1;
        x = (x * x) % MOD;
    }
    return r;
}

int inv(int x)
{
    return pwr(x, MOD-2ll);
}

int fact[N];

int nCr(int n, int r){
    if(n <= 0 or r > n)
        return 0;
    int ans = fact[n];
    int rem = fact[r] * fact[n-r];
    rem %= MOD;
    ans  *= inv(rem);
    ans %= MOD;
    return ans;
}

int get(int n, int m, int g){
    int tot = fact[n];
    int rem = pwr(fact[m], g);
    rem *= fact[g];
    rem %= MOD;
    tot *= inv(rem);
    tot %= MOD;
    return tot; 
}

void solve(){
    int n, k, m, g; cin>>n>>k>>g;
	
	assert(n >= 4 and n <= 1000000);
	assert(k >= 0 and k <= n);
	assert(g > 1 and n % g == 0);
	
    m = n/g;
    
    int tot = get(n, m, g);
    // cout<<tot<<' ';

    int up = nCr(n-k-1, m-1);
    up *= get(n-m, m, g-1);
    up %= MOD;

    // cout<<up<<' ';
    int ans = tot - up + MOD;
    ans %= MOD;
    ans *= inv(tot);
    ans %= MOD;

    cout<<ans<<'\n';
}

signed main()
{
    fast;

    fact[0] = fact[1] = 1;
    for(int i=2;i<N;i++){
        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }

    int t=1;
    cin >>t;
  	assert(t >= 1 and t <= 500000);
    for(int i=1;i<=t;i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();   
    }
    return 0;
}

/*****************************

3
4 3 2
4 0 2
4 1 2

1
0
333333336

**************************/