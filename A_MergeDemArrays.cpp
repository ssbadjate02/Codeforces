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
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m),ans;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<=b[j]) ans.pb(a[i++]);
        else ans.pb(b[j++]);
    }
    if(i==n)
    {
        while(j<m) ans.pb(b[j++]);
    }
    if(j==m)
    {
        while(i<n) ans.pb(a[i++]);
    }
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}