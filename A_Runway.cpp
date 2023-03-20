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
        ll n,m;
        cin>>n>>m;
        map<ll,ll> mp;
        map<ll,set<ll>> m2;
        vector<ll> v(m);
        vector<vector<ll>> x(n,vector<ll>(m));
        for(ll i=0;i<m;i++) cin>>v[i],m2[v[i]].insert(i);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>x[i][j];
                mp[x[i][j]]++;
            }
        }
        set<pair<ll,ll>,greater<pair<ll,ll>>()> s;
        for(auto e:mp)
        {
            s.insert({e.second,e.first});
        }
        multiset<ll> s1;
        set<pair<ll,ll>>s2;
        for(ll i=0;i<m;i++) s1.insert(v[i]);
        ll i=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                s2.insert({mp[x[i][j]],x[i][j]})
            }
        }
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                auto it = s1.find(x[i][j]);
                if(it!=s1.end())
                {
                    mp[x[i][j]]--;
                }
                else
                {
                    auto z=*s2.begin();
                    if(z.first==0 && c<m)
                    {
                        s1.erase(s1.begin());
                        s1.insert(x[i][j]);
                        c++;
                        mp[x[i][j]]--;
                    }
                    else
                    {
                        ans++;
                        
                    }
                }
            }
        }
    }   
}