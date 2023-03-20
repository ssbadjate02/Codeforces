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
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        reverse(v.begin(),v.end());
        ll a=v[0];
        v.erase(v.begin());
        ll j=0;
        // while(v[j]==a) j++;
        while(j<n-1)
        {
            while(v[j]==a) j++;   
            if(j<n)ans++;
            j=2*(j+1)-1;
        }
        cout<<ans<<"\n";
    }   
}