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
        ll x=n-1;
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                ans+=x;
                x--;
                continue;
            }
            for(ll j=i+1;j<n;j++)
            {
                if(v[j]%2==1 && __gcd(v[i],v[j])>1) ans++;
            }
        }
        cout<<ans<<"\n";
    }   
}