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
    ll n,t;
    cin>>n>>t;
    vector<vector<ll>> v(n+1);
    vector<ll> dist(n+1),vis(n+1);
    for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    queue<ll> q;
    q.push(1);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        vis[x]=1;
        for(auto e:v[x])
        {
            if(vis[e]) continue;
            dist[e]=dist[x]+1;
            q.push(e);
        }
    }
    while(t--)
    {
        ll c,d;
        cin>>c>>d;
        if(dist[c]%2!=dist[d]%2) cout<<"Road\n";
        else cout<<"Town\n";
    }
}