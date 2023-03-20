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
        vector<ll>k(n),h(n);
        for(ll i=0;i<n;i++) cin>>k[i];
        for(ll i=0;i<n;i++) cin>>h[i];
        map<ll,ll> m;
        ll ans=0;
        m[k[0]]=h[0];
        for(ll i=1;i<n;i++)
        {
            auto it = m.rbegin();
            if(k[i]-h[i]+1>it->first)
            {
                m[k[i]]=h[i];
            }
            else
            {
                auto it = m.lower_bound(k[i]-h[i]+1);
                ll x=h[i];
                while(it!=m.end())
                {
                    x=max(x,it->second+k[i]-(it->first));
                    it=m.erase(it);
                }
                it = m.lower_bound(k[i]-h[i]+1);
                m[k[i]]=x;
            }
        }
        for(auto e:m)
        {
            // cout<<e.first<<" "<<e.second<<"\n";
            ans+=e.second*(e.second+1)/2;
        }
        cout<<ans<<"\n";
    }   
}