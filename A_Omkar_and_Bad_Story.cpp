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
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            if(v[i]<0) f=1;
        }
        if(f) cout<<"NO\n";
        else
        {
            cout<<"YES\n101\n";
            for(ll i=0;i<=100;i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }   
}