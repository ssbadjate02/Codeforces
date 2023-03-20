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
    ll n,ans=0,c=0;
    cin>>n;
    vector<ll> v(n),sf(n),c1(100005),c2(100005);
    for(ll i=0;i<n;i++) cin>>v[i];
    sf[n-1]=1;
    c1[v[n-1]]++;
    for(ll i=n-2;i>=0;i--) sf[i]=sf[i+1]+(c1[v[i]]==0),c1[v[i]]++;  
    for(ll i=0;i<n-1;i++)
    {
        if(c2[v[i]]==0)
        {
            ans+=sf[i+1];
        }
        c2[v[i]]++;
    }
    // cout<<c<<"\n";
    // ans+=c*(c-1)/2;
    cout<<ans<<"\n";
}
