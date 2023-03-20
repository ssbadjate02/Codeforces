#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll f(ll i,ll j,ll k,ll n)
{
    ll ans=0;
    vector<ll> p(n+1),s(n+1);
    for(ll l=0;l<n-2;l++) p[l]=l*(i);

}

int main()
{
    FASTIO;
    ll n,m,ans=0;
    cin>>n>>m;
    for(ll i=1;i<=m;i++)
    {
        for(ll j=i+1;j<=m;j++)
        {
            for(ll k=j+1;k<=m;k++)
            {
                ans+=f(i,j,k,n);
            }
        }
    }
}