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
        vector<ll> v(4),b;
        for(ll i=0;i<4;i++) cin>>v[i];
        b=v;
        sort(v.begin(),v.end());
        ll m1=v[3],m2=v[2];
        ll a=max(b[0],b[1]),c=max(b[2],b[3]);
        if((a==m1 && c==m2)||(a==m2 && c==m1)) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}