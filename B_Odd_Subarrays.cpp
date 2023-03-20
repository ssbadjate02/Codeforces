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
        ll n,maxx=0,ans=0;
        cin>>n;
        vector<ll> v(n+1,1e9+7);
        for(ll i=0;i<n;i++) cin>>v[i];
        maxx=v[0];
        for(ll i=1;i<n;i++)
        {
            if(v[i]<maxx)
            {
                ans++;
                maxx=v[i+1];
            }
            else maxx=v[i];
        }
        cout<<ans<<"\n";
    }   
}