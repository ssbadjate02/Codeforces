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
    ll n,k;
    cin>>n>>k;
    set<ll> s;
    for(ll i=0;i<k;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }   
    if(s.size()==n-1) cout<<"YES\n";
    else cout<<"NO\n";
}