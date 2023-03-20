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
    ll n,k,x=0,z=0;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    vector<ll>p(n);
    multiset<pair<ll,ll>> s;
    ll i=0,j=k-1;
    for(ll i=0;i<n;i++)
    {
        ll a,b=0;
        cin>>a;
        v[i]={a,b};
    }
    while(j<n)
    {
        z=0;
        for(ll l=0;l<=n;l++)
        {
            if(v[l].second==0)
            {
                 s.insert({v[l].first,l});
                 z++;
                 if(z==k) break;
            }
        }
        pair<ll,ll> e=*s.begin();
        s.erase(s.begin());
        v[e.second].second=1;
        x+=e.first;
        p[i]=x;
        i++;
        j++;
        if(j!=n) s.clear();
    }

    for(auto e:s)
    {
        x+=e.first;
        p[i]=x;
        i++;
    }
    x=0;
    for(i=0;i<n;i++) x+=p[i];
    cout<<x;
}