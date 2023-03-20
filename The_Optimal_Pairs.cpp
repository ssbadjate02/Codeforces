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
    v[1]=1;
    for(ll i=2;i<20;i++) v[i]= v[i-1]*2;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        m.clear();
        ans=0;
        ll x = primeFactors(n);
        ll y=0;
        m[1]=1;
        for(auto e:m) if(e.second==1) y++;
        y=(1<<y)-2;
        for(auto e:m) if(e.second!=1) y+=e.second;
        // cout<<x<<"\n";
        // x=(1<<x)-1;
        // for(auto e:m) x/=v[e.second];
        cout<<y<<"\n";
    }
}