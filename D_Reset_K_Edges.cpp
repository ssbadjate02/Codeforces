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

vector<vector<ll>>adj;
vector<int> parent;
ll x=0;
ll dfs(ll i,ll p, ll m)
{   
    ll d=0;
    for(auto e:adj[i]) d=max(dfs(e,i,m),d);
    if(d==m && p!=-1 && parent[p]!=-1) x++,d=0;
    else    d++;
    return d;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        adj.clear();
        adj.resize(n+1);
        parent.clear();
        parent.resize(n+1);
        for(int i=2;i<=n;i++)
        {
            ll a;
            cin>>a;
            adj[a].pb(i);
            parent[i] = a;
        }
        ll l=0,r=n;
        while(l+1<r)
        {
            x=0;
            ll m = (l+r)/2;
            dfs(1,-1,m);
            if(x<=k) r = m;
            else l = m;
            // cout<<l<<" "<<r<<" "<<*s.begin()<<"\n";
        }
        cout<<r<<"\n";
        // cout<<*s.begin()<<"\n";
    }   
}