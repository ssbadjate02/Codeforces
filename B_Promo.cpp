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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n),p(n+1);
        for(ll i=0;i<n;i++ )cin>>v[i];
        sort(all(v),greater<ll>());
        // p[0]=v[0];
        for(ll i=0;i<n;i++) p[i+1]=p[i]+v[i]; 
        // cout<<"\n";
        // for(ll i=0;i<=n;i++) cout<<p[i]<<" "; 
        while(m--)
        {
            ll x,y;
            cin>>x>>y;
            cout<<p[x] - p[x-y]<<"\n";
        }
    // }   
}