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
    ll n,m,k
    cin>>n>>m>>k;
    vector<ll> v(n),l(m+1),r(m+1),d(m+1),o(m+1),ans(n+1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
        r[i]++;
    }   
    for(ll i=0;i<k;i++)
    {
        ll x,y;
        cin>>x>>y;
        y++;
        o[x]++;
        o[y]--;
    }
    for(ll i=1;i<=m;i++)
    {
        o[i]+=o[i-1];
    }
    for(ll i=0;i<m;i++)
    {
        ans[l[i]]+=o[i]*d[i];
        ans[r[i]]-=o[i]*f[i];
    }
    for(ll i=0)
}