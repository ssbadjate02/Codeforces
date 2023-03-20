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
        for(ll i=0;i<n;i++) cin>>v[i];
        ll g1,g2,f1=0,f2=0;
        if(n==2 && v[0]!=v[1])
        {
            cout<<max(v[0],v[1])<<"\n";
            continue;
        }
        else if(n==2) 
        {
            cout<<"0\n";
            continue;
        }
        g1=v[0];
        g2=v[1];
        for(ll i=2;i<n;i+=2) g1=__gcd(g1,v[i]);
        if(n>3) for(ll i=3;i<n;i+=2) g2=__gcd(g2,v[i]);

        for(ll i=0;i<n;i+=2) if(v[i]%g2==0) f1=1;
        for(ll i=1;i<n;i+=2) if(v[i]%g1==0) f2=1;

        if(f1==0) cout<<g2<<"\n";
        else if(f2==0) cout<<g1<<"\n";
        else cout<<"0\n"; 
    }   
}