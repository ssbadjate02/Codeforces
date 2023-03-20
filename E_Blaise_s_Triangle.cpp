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
    ll n;
    cin>>n;
    ll ans=1,j=1;
    for(ll i=n;i>ceil((double)n/(double)2);i--)
    {
        ans*=i;
        if(j<=n/2 && ans%j==0)
        {
            ans/=j;
            j++;
        }
    }
    if(j<=n/2) ans/=j;
    // for(ll i=1;i<=n/2;i++) ans/=i;
    cout<<ans<<"\n";
}