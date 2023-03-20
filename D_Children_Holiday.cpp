#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())
#define N 2e5 + 7

ll m, n;
vector<pair<ll, pair<ll, ll>>> v;
vector<ll> ans;

bool good(ll x)
{
    ll s = 0, n = v.size();
    for (ll i = 0; i < n; i++)
    {
        ll ti = v[i].first, zi = v[i].second.first, yi = v[i].second.second;
        s+=zi*x/(ti*zi + yi);
        x=x%(ti*zi + yi);
        if(x<=ti*zi) s+=x/ti;
        else s+=zi;  
    }
    return s>=m;
}

int main()
{
    FASTIO;
    ll l = 0, r = 1e8;
    cin >> m >> n;
    v.resize(n);
    ans.resize(n,0);
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[i] = {a, {b, c}};
    }
    while (r > l + 1)
    {
        ll x = (l + r) / 2;
        if (good(x))
            r = x;
        else
            l = x;
    }
    cout<<r<<"\n";
    for(ll i=0;i<n;i++)
    {
        ll ti = v[i].first, zi = v[i].second.first, yi = v[i].second.second;
         ans[i]+=r/(ti*zi + yi);
        r=r%(ti*zi + yi);
        if(r<=ti*zi) ans[i]+=r/ti;
        else ans[i]+=zi;  
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
}