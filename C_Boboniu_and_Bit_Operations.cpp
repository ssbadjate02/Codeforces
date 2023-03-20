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
    vector<ll> a(n),b(m);
    vector<vector<ll>> v(n,vector<ll>(m));
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll j=0;j<m;j++) cin>>b[j];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            v[i][j]=a[i]&b[j];
        }
    }
    for(ll l=0;l<(1<<9);l++)
    {
        ll g=0;
        for(ll i=0;i<n;i++)
        { 
            ll f=0;
            for(ll j=0;j<m;j++)
            {
                if((v[i][j]|l)==l)
                {
                    f=1;
                    break;
                }
            }
            if(!f)
            {
                g=1;
                break;
            }
        }
        if(!g)
        {
            cout<<l;
            break;
        }
    }
}