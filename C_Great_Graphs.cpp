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
        ll n,ans=0,s=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(ll i=1;i<n;i++) ans+=v[i]-v[i-1];
        ll j=1;
        for(ll i=n-1;i>=0;i--)
        {
            s+=(n-j)*v[i];
            j+=2;
        }
        cout<<ans-s<<"\n";
    }   
}