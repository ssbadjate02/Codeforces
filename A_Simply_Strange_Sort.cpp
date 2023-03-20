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
        vector<ll> v(n),a;
        for(ll i=0;i<n;i++) cin>>v[i];
        a=v;
        sort(a.begin(),a.end());
        ll ans=0;
        if(a==v)
        {
            cout<<"0\n";
            continue;
        }
        for(ll i=1;i<1100;i++)
        {
            if(i%2)
            {
                for(ll j=0;j<n-1;j+=2) if(v[j]>v[j+1]) swap(v[j],v[j+1]);
            }
            else
            {
                for(ll j=1;j<n-1;j+=2) if(v[j]>v[j+1]) swap(v[j],v[j+1]);
            }
            // for(ll j=0;j<n;j++) cout<<v[j]<<" ";
            // cout<<"\n";
            ans++;
            if(a==v) break;
        }
        
        // cout<<"\n";
        cout<<ans<<"\n";
    }   
}