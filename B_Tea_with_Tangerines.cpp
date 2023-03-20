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
        multiset<ll,greater<ll>> s;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
        }
        ll minn = *s.rbegin(),ans=0;
        while(*s.begin()>=minn*2)
        {
            ll x = *s.begin();
            s.erase(s.begin()); 
            ans+=(x+2*minn-2)/(2*minn-1) - 1;
        }
        cout<<ans<<"\n";
    }   
}