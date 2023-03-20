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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll ans=-1e18;
        for(ll i=max(0ll,n-400);i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ans=max(ans,(i+1)*(j+1)-k*(v[i]|v[j]));
            }
        }
        cout<<ans<<"\n";
    }   
}