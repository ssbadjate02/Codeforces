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
        ll n,f=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        if(v[0]==1)
        {
            f=1;
            cout<<n+1<<" ";
            for(ll i=1;i<=n;i++) cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        if(v[n-1]==0)
        {
            f=1;
            for(ll i=1;i<=n+1;i++) cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        for(ll i=1;i<=n-1;i++)
        {
            if((v[i]==1 && v[i-1]==0))
            {
                f=1;
                for(ll j=1;j<=i;j++) cout<<j<<" ";
                cout<<n+1<<" ";
                for(ll j=i+1;j<=n;j++) cout<<j<<" ";
                cout<<"\n";
                break;
            }
        }
        
        
        if(!f) cout<<"-1\n";
    }   
}