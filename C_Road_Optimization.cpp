#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define en "\n"

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, vector<ll>> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]].push_back(i);
        }
        ll ans = 0;
        for (auto x : m)
        {
            if (x.second.size() > 1)
            {
                ll i = x.second[0];
                ll j = x.second[1];
                ans = max(ans, n - j + i);
            }
        }
        if (ans == 0)
            cout << "-1" << en;
        else
            cout << ans << en;
    }
    return 0;
}