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
        ll n,x,sum=0;
        cin>>n>>x;
        vector<ll> v(n),pf(n+1),l(n+2,-1e9);
        for(ll i=0;i<n;i++)
        {
            pf[i]=sum;
            cin>>v[i];
            sum+=v[i];
        }
        pf[n]=sum;
        for(ll i=0;i<=n;i++)
        {
            for(ll j=i;j<=n;j++)
            {
                l[j-i]=max(l[j-i],pf[j]-pf[i]);
            }
        }
        for(ll k=0;k<=n;k++)
        {
            ll maxx=0;
            for(ll i=0;i<=n;i++)
            {
                maxx=max(maxx,l[i]+min(i,k)*x);
            }
            cout<<maxx<<" ";
        }
        cout<<"\n";
    }   
}