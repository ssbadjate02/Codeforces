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
        ll n,ans=0,m;
        cin>>n>>m;
        vector<ll> v(n*m);
        for(ll i=0;i<n*m;i++) cin>>v[i];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            m.clear();
            for(ll j=0;j<m;j++)
            {
                mp[v[j]]++;
                auto x=mp.find(v[j]);
                for(auto it=mp.begin();it!=x;it++)
                {
                    ans+=it->second;
                }
            }
        }
            cout<<ans<<"\n";
    }
}