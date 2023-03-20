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
    ll n,m;
    cin>>n>>m;
    vector<ll> ok,ek,op,ep;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a%2) op.pb(a);
        else ep.pb(a);
    } 
    for(ll i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        if(a%2) ok.pb(a);
        else ek.pb(a);
    }  
    cout<<min(op.size(),ek.size())+min(ep.size(),ok.size())<<"\n";
}