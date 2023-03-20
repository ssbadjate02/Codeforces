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
        ll hc,dc,hm,dm,k,w,a,f=0;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;
        ll x=hc,y=dc;
        for(ll i=0;i<=k;i++)
        {
            hc=x;
            dc=y;
            dc+=i*w;
            hc+=(k-i)*a;
            // cout<<hc<<" "<<dc<<"\n";
            ll n= (hm / dc) + ((hm % dc) != 0);
            ll m= (hc / dm) + ((hc % dm) != 0);
            if(n<=m)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(!f) cout<<"NO\n";
    }   
}