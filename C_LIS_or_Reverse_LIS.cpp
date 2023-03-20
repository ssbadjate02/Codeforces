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
        ll n,c1=0,c2=0;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> m;
        for(ll i=0;i<n;i++) cin>>v[i],m[v[i]]++;
        for(auto e:m)
        {
            if(e.second==1) c1++;
            else c2++;
        }
        cout<<(c1+1)/2+c2<<"\n";
    }   
}