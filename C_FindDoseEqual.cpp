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
    ll n,m,ans=0;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=0;i<m;i++)
    {
        auto it=upper_bound(a.begin(),a.end(),b[i])-lower_bound(a.begin(),a.end(),b[i]);
        ans+=it;
    }
    cout<<ans;
}