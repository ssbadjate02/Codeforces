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
    ll n,m,f=0;
    cin>>n>>m;
    multiset<ll> a;
    vector<ll> b(m);   
    for(ll i=0;i<n;i++) 
    {
        ll x;
        cin>>x;
        a.insert(x);
    }
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        auto it = a.find(x); 
        if(it==a.end())
        {
            f=1;
            break;
        }
        else a.erase(it);
    }
    if(f) cout<<"No\n";
    else cout<<"Yes\n";
}