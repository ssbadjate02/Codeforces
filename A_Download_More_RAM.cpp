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
        ll n,k,r=0;
        cin>>n>>k;
        r=k;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++) cin>>v[i].first;
        for(ll i=0;i<n;i++) cin>>v[i].second;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(v[i].first>r) break;
            r+=v[i].second;
        }
        cout<<r<<"\n";
    }   
}