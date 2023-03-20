#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second
int main()
{
    FASTIO;
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    vector<ll> ans(n);  
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i]={a,i};
    }
    sort(v.begin(),v.end());
    ll maxx=-1;
    for(ll i=0;i<n;i++)
    { 
        maxx=max(maxx,v[i].ss);
        ans[v[i].ss]=maxx-v[i].ss-1;
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<"\n";
}