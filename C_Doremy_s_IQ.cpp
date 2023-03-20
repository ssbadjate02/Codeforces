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
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n),a(n),ans(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        a[n-1] = 1;
        for(ll i=n-2;i>=0;i--)
        {
            a[i] = a[i+1];
            if(v[i]>a[i+1]) a[i]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(q>=v[i]) ans[i] = 1;
            else if(q>=a[i]) q--,ans[i] = 1;
        }
        for(ll i=0;i<n;i++) cout<<ans[i];
        cout<<"\n";
    }   
}