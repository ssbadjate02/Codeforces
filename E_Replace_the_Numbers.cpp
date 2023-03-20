#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ss second
#define ff first

int main()
{
    FASTIO;
    ll t,i=0;
    cin>>t;
    vector<pair<ll,ll>> v;
    map<ll,ll> m;
    while(t--)
    {
        i++;
        ll a;
        cin>>a;
        if(a==1)
        {
            ll x;
            cin>>x;
            v.pb({x,-1});
        }
        else
        {
            ll x,y;
            cin>>x>>y;
            v.pb({x,y});
        }
    }   
    vector<ll> a;
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(v[i].ss!=-1) 
        {
            // if(m.find(v[i].ss)!=m.end())
            // {
            //     m[v[i].ff] = m.find(v[i].ss)->second;
            // }
            // else m[v[i].ff]=v[i].ss;
            while(m.find(v[i].ss)!=m.end()) m[v[i]]
        }
    }
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(m.find(v[i].ff)==m.end()) a.pb(v[i].ff);
        else a.pb(m[v[i].ff]);
    }
    for(ll i=a.size()-1;i>=0;i--) cout<<a[i]<<" ";
}