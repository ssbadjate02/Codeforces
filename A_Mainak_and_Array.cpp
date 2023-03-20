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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll maxx = *max_element(all(v));
        ll minn = *min_element(all(v));
        ll ans = 0;
        for(ll i=0;i<n-1;i++) ans = max(ans,v[i]-v[i+1]);
        ans = max(ans,v[n-1]-v[0]);
        ans = max(maxx-v[0],ans);
        ans = max(ans,v[n-1]-minn);
        cout<<ans<<"\n";
    }   
}