#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
// #define ll int64_t
const int N=1e9+7;
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        ll l=1;
        for (ll i = 2; l<= n; i++)
        {
            ll y=n/l;
            l=lcm(l,i);
            ll a=n/l;
            ans += (y - a) * i % N;
            ans %= N;
        }
        cout << ans << '\n';
    }   
}