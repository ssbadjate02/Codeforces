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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<ll>x,y,z;
    for(ll i=a;i<=b;i++)x.pb(i);
    for(ll i=b;i<=c;i++)y.pb(i);
    for(ll i=c;i<=d;i++)z.pb(i);
    ll ans=0;
    for(ll i=0;i<x.size();i++)
    {
        for(ll j=0;j<y.size();j++)
        {
            ans+=max(min(x[i]+y[j],d+1)-c,0ll);
        }
    }
    cout<<ans;
}