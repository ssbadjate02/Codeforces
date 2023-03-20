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
    vector<ll> a(n),b(2*n),locb(n+1),loca(n+1);
    map<ll,ll> m;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i],b[i+n]=b[i];
    for(ll i=0;i<n;i++)
    {
        loca[a[i]] = i+1;
    }
    for(ll i=2*n-1;i>=0;i--)
    {
        if(i+1>=loca[b[i]]) locb[b[i]]=i+1;
    }
    for(ll i=1;i<=n;i++)
    {
        m[loca[i] - locb[i]]++;
    }
    ll ans=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        ans=max(ans,it->second);
    }
    cout<<ans;
}