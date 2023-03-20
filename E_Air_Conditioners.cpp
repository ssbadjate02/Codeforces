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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> v(k);
        vector<ll> v1(n+1,1e15),v2(n+1,1e15);
        for(ll i=0;i<k;i++) cin>>v[i].ff;
        for(ll i=0;i<k;i++) cin>>v[i].ss;
        sort(v.begin(),v.end());
        for(ll i=0;i<k;i++)
        {
            v1[v[i].ff]=v[i].ss;
            v2[v[i].ff]=v[i].ss;
        }
        ll x=v[0].ss+1;
        for(ll i=v[0].ff+1;i<=n;i++)
        {
            x=min(v1[i],x);
            v1[i]=x;
            x++;
        }
        x=v[k-1].ss+1;
        for(ll i=v[k-1].ff-1;i>0;i--)
        {
             x=min(v2[i],x);
            v2[i]=x;
            x++;
        }
        for(ll i=1;i<=n;i++) cout<<min(v1[i],v2[i])<<" ";
        cout<<"\n";
    }   
}