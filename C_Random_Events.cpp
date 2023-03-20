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
        long double ans=1;
        cin>>n>>m;
        vector<ll> v(n);
        map<ll,vector<long double>> p;
        for(ll i=0;i<n;i++) cin>>v[i],p[i+1].pb(1);
        for(ll i=0;i<m;i++)
        {
            ll a;
            long double b;
            cin>>a>>b;
            p[a].pb(1-b);
        }
        ll j=n-1;
        while(1)
        {
            if(v[j]!=j+1) break;
            j--;
        }
        // cout<<"j-"<<j<<"\n";
        if(j<=0)
        {
            cout<<"1\n";
            continue;
        }
        // for(ll i=j+1;i<=n;ai++)
        // {
        //     for(ll k=0;k<p[i].size();k++) cout<<i<<"-"<<p[i][k]<<" ";
        //     cout<<"\n";
        // }
        for(ll i=j+1;i<=n;i++) for(ll k=0;k<p[i].size();k++)ans*=(p[i][k]);
        // cout<<ans<<"\n";
        ans=1-ans;
        cout<<setprecision(9)<<ans<<"\n";
        // cout<<"\n\n";
    }   
}