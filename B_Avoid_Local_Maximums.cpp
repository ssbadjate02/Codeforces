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
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        // for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        // cout<<"\n";
        for(ll i=1;i<n-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                if( i+2<n && v[i+2]>v[i]) v[i+1]=max(v[i+2],v[i]);
                else v[i+1]=v[i];
                ans++;
            }
        }
        cout<<ans<<"\n";
        for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";
    }   
}