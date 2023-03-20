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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        // if(n==2)
        // ll x=min_element(v.begin(),v.end())-v.begin();
        ll ans=0;
        // ll y=*max_element(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(i>0) ans=max(ans,v[i]*v[i-1]);
            if(i<n-1) ans=max(ans,v[i]*v[i+1]);
        }
        cout<<ans<<"\n";
    }   
}