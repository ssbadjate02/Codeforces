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
    ll n,sum=0,minans=1e9+7,mini;
    cin>>n;
    vector<ll> v(n),presum(n+1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        presum[i]=sum;
        sum+=v[i];
    }
    presum[0]=sum;
    sort(all(v));
    for(ll i=0;i<n;i++)
    {
        ll ans=sum - v[i] - (n-i-1)*v[i] ;
        minans=min(ans,minans);
        // cout<<ans<<"\n";
    }
    cout<<minans<<"\n";
}