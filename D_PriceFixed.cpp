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
    ll n,nob=0,ans=0;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    ll i=0,j=n-1;
    while(i<=j)
    {
        if(nob>=v[j].ff)
        {
            ans+=v[j].ss;
            nob+=v[j].ss;
            j--;
        }
        else
        {
            ll req=min(v[j].ff-nob,v[i].ss);
            ans+=2*req;
            nob+=req;
            v[i].ss-=req;
            if(v[i].ss<=0) i++;
        }
    }
    cout<<ans<<"\n";
}