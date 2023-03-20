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
    vector<ll> v={1,2,6,24,120,720,5040,40320,362880,3628800};
    ll n,ans=0;
    cin>>n;
    for(ll i=9;i>=0;i--)
    {
        ans+=n/v[i];
        n=n%v[i];
    } 
    cout<<ans<<"\n";
}