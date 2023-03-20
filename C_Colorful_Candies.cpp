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
    ll n,k,x=0,ans=0;
    cin>>n>>k;
    vector<ll> v(n),c(n+1);
    map<ll,ll> m;
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<k;i++)
    {
        m[v[i]]++;
    }
    ans=m.size();
    for(ll i=k;i<n;i++)
    {
        m[v[i]]++;
        m[v[i-k]]--;
        if(m[v[i-k]]==0) m.erase(v[i-k]);
        ans=max(ans,(ll)m.size());
    }
    cout<<ans<<"\n";
}