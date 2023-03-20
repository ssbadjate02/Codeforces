#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i].ff;
            v[i].ss=i+1;
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll x=v[i].ff*v[j].ff;
                if(x>2*n) break;
                if(x==v[i].ss+v[j].ss) ans++;   
            }
        }
        cout<<ans<<"\n";
    }   
}