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
        ll n,s=0,ans=0;
        cin>>n;
        vector<ll> v(n);;
        for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];
        if(s%n)
        {
            cout<<"-1\n";
            continue;
        }
        s=s/n;
        for(ll i=0;i<n;i++) if(v[i]>s) ans++;
        cout<<ans<<"\n";
    }   
}