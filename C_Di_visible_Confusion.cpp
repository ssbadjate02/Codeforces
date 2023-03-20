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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k=0,f=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            ll g=0;
            for(ll j=0;j<=k;j++)
            {
                if(v[i]%(i+2-j)!=0)
                {
                    g=1;
                    break;
                }
            }
            if(!g)
            {
                f=1;
                break;
            }
            k++;
        }
        if(!f)cout<<"YES\n";
        else cout<<"NO\n";
    }   
}