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
        multiset<pair<ll,ll>> s;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert({a,i});
        }
        ll ans=0;
        vector<pair<ll,ll>> v;
        // ll n=s.size();
        while(n>1)
        {
            if((*s.begin()).first==0)
            {
                s.erase(s.begin());
                n--;
                continue;
            }
            auto a=*s.begin();
            auto b=*s.rbegin();
            auto it=s.end();
            it--;
            s.erase(s.begin());
            s.erase(it);
            s.insert({a.first-1,a.second});
            s.insert({b.first-1,b.second});
            v.pb({a.second,b.second});
            ans++;
        }
        cout<<ans<<"\n";
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i].first+1<<" "<<v[i].second+1<<"\n";
        }
    }
}