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
    ll n,k,x,ans=1;
    cin>>n>>k>>x;
    vector<ll> v(n),diff;
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(ll i=0;i<n-1;i++)
    {
        diff.pb(v[i+1]-v[i]);
        // cout<<diff[i]<<" ";
        if(diff[i]>x) ans++;
    } 
    sort(diff.begin(),diff.end());
    // for(ll i=0;i<n-1;i++) cout<<diff[i]<<" ";
    ll s=0;
    // cout<<"\n"  <<ans<<"\n";
    for(ll i=0;i<n-1;i++)
    {
        if(diff[i]>x && k>=(diff[i]/x + ((diff[i]%x)!=0)-1) && k>0)
        {
            k-=((diff[i]/x + ((diff[i]%x)!=0))-1);
            s++;
        }
    }
    cout<<ans-s<<"\n";
}