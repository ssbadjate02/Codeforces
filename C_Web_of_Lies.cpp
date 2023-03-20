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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n+1);
    vector<ll> f(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(b<a) v[a].pb(b),f[a]++;
        else v[b].pb(a),f[b]++;
        // if(a>b) gf[b]++,sf[a]++;
        // else sf[b]++,gf[a]++;
    }
    ll ans=1;
    for(ll i=0;i<n-1;i++) if(f[i]==0) ans++;
    ll q;
    cin>>q;
    while(q--)
    {
        ll a;
        cin>>a;
        if(a==3) cout<<ans<<"\n";
        else if(a==1)
        {
            ll u,v;
            cin>>u>>v;
            if(u>v) swap(u,v);
            if(f[u]) ans--;
        }
        else if(a==2)
        {
            ll u,v;
            cin>>u>>v;
            if(u>v) swap(u,v); 
            if(f[v]==0) ans++;
        }
    }
    
}