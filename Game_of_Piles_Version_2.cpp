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
        ll n,f=0,g=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a%2) f=1;
            else g=1;
            if(f&&g) cout<<"CHEF\n";
        }
       if(!f || !g)cout<<"CHEFINA\n";
    }   
}