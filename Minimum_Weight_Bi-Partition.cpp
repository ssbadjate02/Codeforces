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

ll n,m;
vector<ll> siz,parent;
vector<vector<ll>> adj,adj1;
vector<pair<ll,ll>> v;
int find_set(ll a)
{
    if(a==parent[a]) return a;
    return parent[a] = find_set(parent[a]);
}

void union_set(ll a,ll b)
{
    ll aa = find_set(a);
    ll bb = find_set(b);
    if(aa==bb) return;
    if(siz[aa]<siz[bb]) swap(aa,bb);
    adj1[a].push_back(b);
    parent[bb] = aa;
    siz[aa]+=siz[bb];
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        siz.clear();
        siz.resize(n+1,1);
        parent.clear();
        parent.resize(n+1);
        for(ll i=1;i<=n;i++) parent[i]=i;
        v.clear();
        v.resize(n);
        adj.clear();
        adj.resize(n+1);
        adj1.clear();
        adj1.resize(n+1);
        for(ll i=0;i<n;i++) cin>>v[i].first,v[i].second = i+1;
        for(ll i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
            union_set(x,y);
        }
        // cout<<1;
        vector<pair<ll,pair<ll,ll>>> z;
        sort(all(v));
        for(ll i=1;i<n;i++) z.push_back({v[i].first - v[i-1].first,{v[i-1].second,v[i].second}});
        sort(all(z));
        ll ans=0;
        for(auto e:z)
        {
            ll x = e.second.first;
            ll y = e.second.second;
            ll xx = find_set(x);
            ll yy = find_set(y);
            if(xx!=yy) 
            {
                union_set(x,y);
                ans+= e.first;
            }
        }
        cout<<ans<<" "<<n-1<<"\n";
        for(int i=1;i<=n;i++)
        {
            for(auto e:adj1[i])
            {
                cout<<i<<" "<<e<<"\n";
            }
        }
    }
}