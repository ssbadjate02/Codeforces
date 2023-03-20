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

ll n;
vector<vector<pair<ll,ll>>>  v;
vector<vector<ll>> vis;
vector<vector<char>> ans;
ll dfs(ll i, ll j)
{
    // ll di = v[i][j].ff, dj = v[i][j].ss;
    if(vis[i][j]) return 1;
    // vis[i][j]=1;
    // if(i==di && j==dj) 
    // {
    //     ans[i][j] = 'X';
    //     return 1;
    // }
    vis[i][j]=1;
    
    if(i<n && v[i+1][j].ff==-1 ) 
    {
        ans[i][j] =  'D';
        return dfs(i+1,j);
    }
    if(i>0 && v[i-1][j].ff==-1)
    {
            ans[i][j] =  'U';
        return dfs(i-1,j);
    }
    if(j<n && v[i][j+1].ff==-1)
    {
        ans[i][j] = 'R';
        return dfs(i,j+1);
    }
    if(j>0 && v[i][j-1].ff==-1) 
    {
        ans[i][j] = 'L';
        return dfs(i,j-1);
    }
    return 0;
    
}

void dfs1(ll i,ll j,char c)
{
    if(vis[i][j]) return;
    ll di = v[i][j].ff, dj = v[i][j].ss;
    vis[i][j]=1;
    ans[i][j] = c;
    if(i<n && v[i+1][j].ff==di && v[i+1][j].ss==dj && vis[i+1][j]!=1) dfs1(i+1,j,'U');
    if(i>0 && v[i-1][j].ff==di && v[i-1][j].ss==dj && vis[i-1][j]!=1) dfs1(i-1,j,'D');
    if(j<n && v[i][j+1].ff==di && v[i][j+1].ss==dj && vis[i][j+1]!=1) dfs1(i,j+1,'L');
    if(j>0 && v[i][j-1].ff==di && v[i][j-1].ss==dj && vis[i][j-1]!=1) dfs1(i,j-1,'R');

}

int main()
{
    FASTIO;
    cin>>n;
    v.resize(n+1,vector<pair<ll,ll>>(n+1));
    vis.resize(n+1,vector<ll>(n+1));
    ans.resize(n+1,vector<char>(n+1,' '));
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin>>v[i][j].ff>>v[i][j].ss;
        }
    }   
    ll anss =1;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(!vis[i][j] && v[i][j].ff==-1)
            {
                ll x = dfs(i,j);
                // cout<<i<<" "<<j<<" "<<x<<"\n";
                anss&=x;
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(i==v[i][j].ff && j==v[i][j].ss)
            {
                dfs1(i,j,'X');
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            anss&=vis[i][j];
        }
    }
    if(!anss) cout<<"INVALID\n";
    else 
    {
        cout<<"VALID\n";
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++) cout<<ans[i][j];
            cout<<"\n";
        }
    }
}