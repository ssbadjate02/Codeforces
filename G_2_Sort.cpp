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
        ll n,k;
        cin>>n>>k;
        // k++;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll l = 1,ans=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i-1]<2*v[i]) l++;
            else 
            {
                ans+=max(0ll,l-k);
                l=1;
            }
        }
        ans+=max(0ll,l-k);
        cout<<ans<<"\n";
    }   
}