#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=50005;

int main()
{
    FASTIO;
    set<ll> s;
    vector<ll> v;
    for(ll i=1;i<=N;i++)
    {
        ll x=i*(i+1)/2;
        s.insert(x);
        v.pb(x);
    }
    ll n,f=0;
    cin>>n;
    for(ll i=0;i<v.size();i++)
    {
        if(s.find(n-v[i])!=s.end())
        {
            f=1;
            break;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
}