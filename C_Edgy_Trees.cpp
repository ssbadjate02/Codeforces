#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 1000000007

int power(ll x, ll y)
{
    int res = 1;  
 
    x = x % N; 
   
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % N;
        y = y>>1; // y = y/2
        x = (x*x) % N;
    }
    return res;
}
vector<vector<ll>> v;
vector<ll> vis(100005);
ll s=0,n,k;
void dfs(ll i,ll x)
{
    vis[i]=1;
    for(auto e:v[i])
    {
        if(!vis[e]) x++,dfs(e,x);
    }
    s+=power(x,k);
    // cout<<s<<" ";
}

int main()
{
    FASTIO;
    ll d=0;
    cin>>n>>k;
    v.clear();
    v.resize(n+1);
    for(ll i=0;i<n-1;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c==1) continue;
        v[a].pb(b);
        v[b].pb(a);
    }
    // ll s=0;
    for(ll i=1;i<=n;i++)
    {
        ll x=1;
        if(!vis[i]) dfs(i,x);
        d++;
    }
    cout<<power(n,k) - s <<"\n";
}