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
        vector<ll> v(n*m),a;
        for(ll i=0;i<n*m;i++) cin>>v[i];
        a=v;
        sort(v.begin(),v.end());
        ll c=0,r=0;
        map<ll,set<pair<ll,ll>,greater<pair<ll,ll>>>> mp;
        for(ll i=0;i<n*m;i++)
        {
            mp[v[i]].insert({c,-r});
            c++;
            if(c==m) c=0,r++;
        }
        vector<map<ll,ll>> mv(n);
        c=0,r=0;
        for(ll i=0;i<n*m;i++)
        {
            r=-(*mp[a[i]].begin()).second;
            c=(*mp[a[i]].begin()).first;
            mp[a[i]].erase(mp[a[i]].begin());
            mv[r][a[i]]++;
            auto x=mv[r].find(a[i]);
            for(auto it=mv[r].begin();it!=x;it++)
            {
                ans+=it->second;
            }
        }
            cout<<ans<<"\n";
    }
}