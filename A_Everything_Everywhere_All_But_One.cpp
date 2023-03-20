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
        ll n,s=0;
        cin>>n;
        map<ll,ll> m;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            m[a]=1;
            s+=a;
        }
        ll x=s/n;
        if(x!=(double)s/(double)n)
        {
            cout<<"NO\n";
        }
        else
        {
            if(m.find(x)==m.end()) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }   
}