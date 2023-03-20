#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

vector<vector<ll>> adj;
vector<pair<ll,ll>> x;
string s;
pair<ll,ll> dfs(ll i)
{
    for(auto e:adj[i])
    {
        auto p = dfs(e);
        x[i].ff+=p.ff;
        x[i].ss+=p.ss;
    }
    if(s[i-1]=='W') x[i].ff++;
    else x[i].ss++;
    return x[i];
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
        adj.clear();
        adj.resize(n+1);
        x.clear();
        x.resize(n+1,{0,0});
        s.clear();
        for(ll i=2;i<=n;i++)
        {
            ll a;
            cin>>a;
            adj[a].pb(i);
        }
        cin>>s;
        dfs(1);
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            if(x[i].ff==x[i].ss) ans++;
        }
        cout<<ans<<"\n";
    }       
}