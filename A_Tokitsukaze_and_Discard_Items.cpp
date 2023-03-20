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
    ll n,m,k,j=0,ans=0,t=0,p=1;
    cin>>n>>m>>k;
    vector<ll> v(m);   
    for(ll i=0;i<m;i++) cin>>v[i];
    while(j<m)
    {
        ll temp=t,f=0;
        while(j<m && v[j]<=p*k+temp) j++,t++,f=1;
        if(j<m && v[j]>p*k+t) p=max((v[j]-t-1)/k+1,1ll);
        ans+=f;
    }
    cout<<ans;
}