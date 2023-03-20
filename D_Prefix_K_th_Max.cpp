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
    ll n,k,minn=1e9;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<k;i++) minn=min(minn,v[i]);
    cout<<minn<<"\n";
    for(ll i=k;i<n;i++)
    {
        minn=min(minn,v[i]);
        cout<<minn<<"\n";
    }
}   