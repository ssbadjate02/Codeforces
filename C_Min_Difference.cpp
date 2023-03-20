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
    ll n,m,ans=1e15;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    set<ll> as,bs;
    for(ll i=0;i<n;i++) cin>>a[i],as.insert(a[i]);
    for(ll i=0;i<m;i++) cin>>b[i],bs.insert(b[i]);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++)
    {
       ll e = lower_bound(b.begin(),b.end(),a[i])-b.begin();
        if(e<m && e>=0) ans=min(ans,abs(a[i]-b[e]));
        if(e+1<m && e+1>=0) ans=min(ans,abs(a[i]-b[e+1]));
        if(e-1<m && e-1>=0) ans=min(ans,abs(a[i]-b[e-1]));
    }
    cout<<ans;
}