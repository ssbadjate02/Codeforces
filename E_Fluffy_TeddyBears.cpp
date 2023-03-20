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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<ll,ll> m;
    for(ll i=0;i<k;i++) m[v[i]]++;
    ll maxans=m.size(),ans=m.size(),i=0,j=k;
    while(j<=n)
    {
        m[v[j]]++;
        m[v[i]]--;
        if(m[v[j]]==1) ans++;
        if(m[v[i]]==0) ans--;
        i++,j++;
        maxans=max(ans,maxans);
    }   
    cout<<maxans;
}