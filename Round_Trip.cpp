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

ll n,m,f=0;
vector<vector<ll>> v;
vector<ll> path,p;
vector<pair<ll,ll>> c;
vector<ll> vis;

void dfs(int i)
{
    vis[i]=0;
    for(auto e:v[i])
    {
        if(vis[e]==0)
        {
            // ll x=e,s=1;
            // vector<ll> temp;
            // temp.pb(i);
            // while(x!=i)
            // {
            //     temp.pb(x);
            //     x=p[x];
            //     s++;
            //     if(x==i) break;
            // }
            // temp.pb(i);
            // if(s>path.size()) path=temp;
            // if(path.size()>=4)
            // {
            //     f=1;
            //     break;
            // }
            c.pb({i,e});
        }
        if(vis[e]==-1)
        {
            vis[i]=1;
            p[e]=i;
            dfs(e);
        }
    }
}

int main()
{
    FASTIO;
    cin>>n>>m;
    v.resize(n+1);
    vis.resize(n+1,-1);
    p.resize(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(ll i=0;i<n;i++)
    {
        if(vis[i]==-1) dfs(i);
    }
    for(ll i=0;i<c.size();i++)
    {
        ll x=c[i].ss,j=c[i].ff,s=1;
        vector<ll> temp;
        temp.pb(j);
        while(x!=j)
        {
            temp.pb(x);
            x=p[x];
            s++;
            if(x==j) break;
        }
        temp.pb(j);
        if(s>path.size()) path=temp;
        if(path.size()>=4)
        {
            f=1;
            break;
        }
    }
    if(!f)
    {
        cout<<"IMPOSSIBLE\n";
    }
    else
    {
        reverse(path.begin(),path.end());
        cout<<path.size()<<"\n";
        for(ll i=0;i<path.size();i++) cout<<path[i]<<" ";
    }
    
}