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
        ll n,l,s=0;
        cin>>n>>l;
        vector<ll> v(l+1),c(l+1);

        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            ll j=l;
            while(a!=0)
            {
                ll r = a%2;
                c[j--]+=r;
                a/=2;
            }
        }
        for(ll i=0;i<=l;i++)
        {
            if(c[i]>n/2) v[i]=1;
        }
        ll ans=0,a =1;;
        for(ll i=l;i>=0;i--)
        {
            ans+=v[i]*a;
            a*=2;
        }
        cout<<ans<<"\n";
    }   
}