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
    ll n,ans=0,s=0;
    cin>>n;
    vector<ll> v(n);
   for(ll i=0;i<n;i++) cin>>v[i];
   s=v[n-1];
   for(ll i=n-2;i>=0;i--)
   {
       ans+=s*v[i];
       s+=v[i];
   }
   cout<<ans<<"\n";
}