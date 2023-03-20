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
        ll n,l,r,ans=0;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        for(ll i=0;i<n-1;i++)
        {
            
            if(v[i]>r) break;
            ll x=l-v[i],y=r-v[i],z=ans;
            ll a1=upper_bound(v.begin()+i+1,v.end(),y)-v.begin(),a2=lower_bound(v.begin()+i+1,v.end(),x)-v.begin();

            
                ans+=a1-a2;
        }
    
        cout<<ans<<"\n";
    }  
}