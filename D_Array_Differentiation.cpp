#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,g=0;
vector<ll> v;
vector<ll> dp;

void f(ll i,ll s,ll x)
{
    if(i==n)
    {
        g=max(g,(ll)(x==1 && s==0));
        return;
    }
    f(i+1,s+v[i],1);
    f(i+1,s-v[i],1);
    f(i+1,s,x);
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        g=0;
        v.clear();
        v.resize(n);
        dp.clear();
        dp.resize(n,-1);
        for(ll i=0;i<n;i++) cin>>v[i];
        f(0,0,0);
        if(g==0) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}