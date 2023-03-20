#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    map<ll,set<ll>> m;
    for(ll i=0;i<n;i++) 
    {
        ll a,b;
        cin>>a>>b;
        v[i]={a,b};
        m[a].insert(b);
    }   
    ll ans=0;
    for(auto it1=m.begin();it1!=m.end();it1++)
    {
        set<ll> s=it1->second;
        
        for(auto it2=m.begin();it2!=m.end();it2++)
        {
            ll x=0;
            if(it1==it2) continue;
            set<ll> t=it2->second;
            for(auto e:s)
            {
                if(t.find(e)!=t.end()) x++;
            }
            ans+=x*(x-1)/2;
        }
    }
    cout<<ans/2<<"\n";
}