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
        vector<pair<ll,ll>> v;
        for(ll i=0;i<3;i++)
        {
            ll a,b;
            cin>>b>>a;
            v.pb({a,b});
        }
        sort(all(v));
         ll ans=0;
        if(v[0].ff==v[1].ff && v[2].ff<v[1].ff)  ans+=abs(v[1].ss-v[0].ss);
        if(v[2].ff==v[1].ff && v[0].ff<v[1].ff)  ans+=abs(v[1].ss-v[2].ss);
        cout<<ans<<"\n";
    }   
}