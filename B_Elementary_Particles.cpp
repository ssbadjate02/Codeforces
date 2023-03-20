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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        map<ll,vector<ll>> m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]].pb(i);
        }
        ll ans=-1;
        for(auto e:m)
        {
            vector<ll> te;
            te=e.second;
            if(te.size()==1) continue; 
            ll minn=1e9;
            for(ll j=1;j<te.size();j++) minn=min(minn,abs(te[j]-te[j-1]));
            ans=max(ans,n-minn);
            // cout<<te[i]<<" "<<te[j]<<"\n";
        }
        cout<<ans<<"\n";
    }   
}