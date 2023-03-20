#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl "\n"
#define ll long long int
#define ld long double
#define pb push_back
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define all(x) x.begin(),x.end()
ld pi=3.14159265358979323846;

using namespace std;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        map<ll,ll> m;
        ll cnt=0,f=0,g=0;
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            if (in%k==0) f=1;
            else if (in%k==(ld)k/2) g=1;
            else m[in%k]++;
        }
        cnt=f+g;
        for (ll i = 1; i < k/2; i++)
        {
            if (m[i]|| m[k-i])
            {
                if (m[i] || m[k-i]) cnt++;
            }
            cnt+=max(abs(m[i]-m[k-i])-1,0ll);
        }
        cout << cnt << endl;
    }
    return 0;
}