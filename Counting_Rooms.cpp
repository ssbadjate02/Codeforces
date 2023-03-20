#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<string> v(1001);
vector<vector<int>> vis(1001,vector<int>(1001));
int n,m;
void dfs(int i,int j)
{
    vis[i][j]=1;
    if(i>0 && v[i-1][j]=='.' && !vis[i-1][j]) dfs(i-1,j);
    if(i<n-1 && v[i+1][j]=='.' && !vis[i+1][j]) dfs(i+1,j);
    if(j>0 && v[i][j-1]=='.' && !vis[i][j-1]) dfs(i,j-1);
    if(j<m-1 && v[i][j+1]=='.' && !vis[i][j+1]) dfs(i,j+1);
}

int main()
{
    FASTIO;
    ll ans=0;
    cin>>n>>m; 
    for(int i=0;i<n;i++)
    {
            cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]==1 || v[i][j]=='#') continue;
            dfs(i,j);
            ans++;
        }
    } 
    cout<<ans; 
}