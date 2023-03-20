#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7


int main()
{
    FASTIO;
       ll n;
       cin>>n;
    map<ll,ll> m;
    while (n--)
    {
        ll in;
        cin >> in;
        m[in]++;
    }
    ll cnt=0;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->second << " ";
    }
}