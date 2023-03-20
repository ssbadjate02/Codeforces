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
    ll n,z;
    cin>>n>>z;
    vector<ll> v(n),u(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll j=1,ans=0;
    for(ll i=0;i<n;i++)
    {
        if(u[i]) continue;
        while(j<n && v[i]-v[j]<z) j++;
        if(j==n) break;
        u[j]=1;
        ans++;
        j++;
    } 
    cout<<ans<<'\n';
}