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
        ll n,f=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll minn=v[0],maxx=v[0];
        for(ll i=1;i<n;i++)
        {
            if(v[i]>minn && v[i]<maxx)
            {
                f=1;
                break;
            }
            minn=min(v[i],minn);
            maxx=max(v[i],maxx);
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }
}