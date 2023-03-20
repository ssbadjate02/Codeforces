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
        // cout<<(n^n)<<"\n";
        vector<ll> v;
        ll i=1;
        while(1)
        {
            if(i&n) break;
            i*=2;
        }
        ll ans;
        if(i^n) ans = i;
        else if(((i*2)+1)^n) ans=i*2    +1;
        cout<<ans<<"\n";
    }   
}