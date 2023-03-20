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
    ll n,m,ans=0;
    cin>>n>>m;
    vector<ll> fac(250005);
    fac[1]=1;
    fac[0]=1;
    for(ll i=2;i<250005;i++) fac[i]=(fac[i-1]*i)%m;
    for(ll l=1;l<=n;l++)
    {
        ans+=(n-l+1)*(fac[l]%m*fac[n-l+1]%m)%m  ;
        ans%=m;
    }   
    cout<<ans<<"\n";
}