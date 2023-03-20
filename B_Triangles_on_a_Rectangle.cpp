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
        ll w,h;
        cin>>w>>h;
        vector<ll> v1,v2,v3,v4;
        ll k1,k2,k3,k4;
        cin>>k1;
        for(ll i=0;i<k1;i++)
        {
            ll a;
            cin>>a;
            v1.pb(a);
        } 
        cin>>k2;
        for(ll i=0;i<k2;i++)
        {
            ll a;
            cin>>a;
            v2.pb(a);
        }
        cin>>k3;
        for(ll i=0;i<k3;i++)
        {
            ll a;
            cin>>a;
            v3.pb(a);
        }
        cin>>k4;
        for(ll i=0;i<k4;i++)
        {
            ll a;
            cin>>a;
            v4.pb(a);
        }

        ll a1=h*max(v1[k1-1]-v1[0],v2[k2-1]-v2[0]);
        ll a2 = w*max(v3[k3-1]-v3[0],v4[k4-1]-v4[0]);
        cout<<max(a1,a2)<<"\n";
    }

}