#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.first!=b.first) return (a.first<b.first);
    return (a.second > b.second);
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++)
        {
            ll k;
            cin>>k;
            ll maxx=0;
            for(ll j=0;j<k;j++)
            {
                ll a;
                cin>>a;
                maxx=max(maxx,a-j);
            }
            v[i]={maxx,k};
        }
        sort(v.begin(),v.end(),cmp);
        ll ans=v[0].first+1;
        ll j=ans;
        for(ll i=0;i<n;i++)
        {
            if(j>v[i].first) j+=v[i].second;
            else
            {
                ans+=(v[i].first-j+1);
                j=v[i].first+1+v[i].second;
            }
        }
        cout<<ans<<"\n";
    }   
}