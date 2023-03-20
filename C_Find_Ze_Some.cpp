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
        ll n,x;
        
        cin>>n>>x;
        vector<ll> v(n);
        ll ans=x*(x+1)/2;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<=x) ans-=(2*v[i]);
        }
        cout<<ans<<"\n";
    }   
}