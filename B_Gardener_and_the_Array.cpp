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
        vector<vector<ll>> v(n);
        map<ll,ll> u;
        for(ll i=0;i<n;i++)
        {
            ll k;
            cin>>k;
            vector<ll> temp(k);
            for(ll j=0;j<k;j++) cin>>temp[j],u[temp[j]]++;
            v[i] = temp;
        }
        ll g=0;
        for(ll i=0;i<n;i++)
        {
            ll f=0;
            for(ll j=0;j<v[i].size();j++) if(u[v[i][j]]==1) f=1;
            if(!f) g=1;
        }   
        if(g) cout<<"Yes\n";
        else cout<<"No\n";
    }
}