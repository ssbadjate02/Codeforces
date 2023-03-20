#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n;
vector<ll> v(150005),f(150005,1);
map<ll,ll> m;
void func(ll i)
{
    if(m.find(v[i])==m.end()) m[v[i]]=i;
    else
    {
        f[m[v[i]]]=0;
        m.erase(m.find(v[i]));
        v[i]*=2;
        func(i);
    }
}

int main()
{
    FASTIO;
    
    cin>>n;
    ll ans=0;
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        func(i);
    }
    for(ll i=0;i<n;i++)
    {
        if(f[i]==1) ans++;
    }
    cout<<ans<<"\n";
    for(ll i=0;i<n;i++)
    {
        if(f[i]==1) cout<<v[i]<<" ";
    }
}