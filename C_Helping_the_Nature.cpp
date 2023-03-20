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
        ll n,minn = INT_MAX,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<ll> a =v;
        ll x=0;
        for(ll i=1;i<n;i++)
        {
            v[i]+=x;
            if(v[i]<=v[i-1]) continue;
            ans+=(v[i]-v[i-1]);
            x-=(v[i]-v[i-1]);
            v[i] = v[i-1];
        }
        if(v[n-1]<0) ans+=abs(v[n-1]);
        ans+=max(v[0]-v[n-1],v[0]);
        // for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        // cout<<"\n";
        v=a;
        ll ans2=0;
        // cout<<"x "<<x<<"\n";
        x=0;
        for(ll i=n-2;i>=0;i--)
        {
            v[i]+=x;
            if(v[i]<=v[i+1]) continue;
            ans2+=(v[i]-v[i+1]);
            x-=(v[i]-v[i+1]);
            v[i] = v[i+1];
        }
        if(v[0]<0) ans2+=abs(v[0]);
        ans2+=max(v[n-1]-v[0],v[n-1]);
        // cout<<ans2<<"\n";
        cout<<min(ans,ans2)<<"\n";
        
    }   
}
// 8 0 8 0 - 4 op
// 0 0 8 0 - 8 op
// 0 0 0 -8 - 8 op
// 8 8 8 0  - 8 op
// 0 0 0 0 - 8 op
// 10 7 4