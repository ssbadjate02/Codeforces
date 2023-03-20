#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans;
        cin>>n;
        vector<ll> v(n),c(128);
        for(ll i=0;i<n;i++) cin>>v[i],c[v[i]]++; 
        for(ll i=1;i<n;i++)
        {
            ll x=v[0];
            for(ll j=1;j<n;j++)
            {
                if(i==j) continue;
                x=(x^v[j]);
            }
            if(c[x]) 
            {
                ans=x;
                break;
            }
        }
        ll x=v[1];
        for(ll i=2;i<n;i++) x=(x^v[i]);
        if(x==v[0]) ans=v[0];
        cout<<ans<<"\n";
    }   
}