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
        vector<ll> v(3);
        cin>>v[0]>>v[1]>>v[2];
        sort(all(v));
        if(v[0]==v[2])
        {
            cout<<"YES\n";
            continue;
        }
        ll f=0;
        for(ll i=1;i<1e18;i*=2)
        {
            ll x = (v[0]+v[1]+v[2]+i-1);
            if(x%3!=0) continue;
            x/=3;
            if(x<v[0] || x<v[1] || x<v[2]) continue; 
            // cout<<i<<"\n";
            f=1;
            break;
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}