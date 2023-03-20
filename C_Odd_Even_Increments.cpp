#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

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
        for(ll i=0;i<n;i+=2)
        {
            if(v[0]%2!=v[i]%2) f=1;
        }
        for(ll i=1;i<n;i+=2)
        {
            if(v[1]%2!=v[i]%2) f=1;
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}