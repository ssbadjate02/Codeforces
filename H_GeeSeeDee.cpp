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
        vector<ll> v(n);
        ll g=1;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(i!=0) g=max(g,__gcd(v[i],v[i-1]));
        }
        ll ans=0,maxans=0;
        cout<<g<<" ";
        for(ll i=0;i<n;i++)
        {
            if(v[i]%g==0) ans++;
            else
            {
                maxans=max(maxans,ans);
                ans=0;
            }
        }
        maxans=max(maxans,ans);
        cout<<maxans<<"\n";
    }   
}