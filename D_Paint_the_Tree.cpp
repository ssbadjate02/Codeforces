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

// vector<vector<vector<ll>>> ans(100005,vector<vector<ll>>(4,vector<ll>(4)));
map<ll,map<ll,map<ll,ll>>> ans;
vector<vector<ll>> adj;
vector<vector<ll>> c;

ll dfs(ll i,ll p, ll cp, ll pp, ll cpp)
{
    ll minn = LLONG_MAX;
    for(ll j=0;j<3;j++)
    {
        if(j==cp || j==cpp) continue;
        ll anss=c[j][i];
        for(auto e:adj[i]) 
        {
            if(e==p) continue;
            anss+=dfs(e,i,j,p,cp);
        }
            // cout<<i<<" "<<j<<"\n";  
        if(anss<minn)
        {
            minn=anss;
            ans[i][cp+1][cpp+1]=j+1; 
        }
    }   
    return minn;
}

int main()
{
    FASTIO;
    ll n,f=0;
    cin>>n;
    adj.resize(n+1);
    // ans.resize(n+1,vector<vector<ll>>(4,vector<ll>(4)));
    c.resize(3,vector<ll>(n+1));
    // cout<<1;
    for(ll i=1;i<=n;i++) cin>>c[0][i];
    for(ll i=1;i<=n;i++) cin>>c[1][i];
    for(ll i=1;i<=n;i++) cin>>c[2][i];
    for(ll i=1;i<n;i++) 
    {
        ll a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(ll i=1;i<=n;i++)
    {
        if(adj[i].size()>=3) f=1;
    }
    if(f)
    {
        cout<<"-1\n";
        return 0;
    }
    cout<<dfs(1,-1,-1,-1,-1)<<"\n";
    ll cp=0,cpp=0;
    for(ll i=1;i<=n;i++)
    {
        ll temp = ans[i][cp][cpp];
        cout<<temp<<" ";
        cpp=cp;
        cp=temp;
    }
}
