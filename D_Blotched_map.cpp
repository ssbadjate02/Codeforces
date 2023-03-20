#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
int n,m;
void sol(vector<vector<char>>&grid,int i,int j,vector<vector<int>> &vis)
{
    vis[i][j]=1;
    if(i!=n-1 && grid[i+1][j]=='1' && !vis[i+1][j]) sol(grid,i+1,j,vis);
    
    if(j!=m-1 && grid[i][j+1]=='1' && !vis[i][j+1]) sol(grid,i,j+1,vis);
    
    if(i!=0 && grid[i-1][j]=='1' && !vis[i-1][j]) sol(grid,i-1,j,vis);
    
    if(j!=0 && grid[i][j-1]=='1' && !vis[i][j-1]) sol(grid,i,j-1,vis);
    
}

int numIslands(vector<vector<char>>& grid) 
    {
       int ans=0;
        vector<vector<int>> vis(n+1,vector<int>(m+1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    ans++;
                    sol(grid,i,j,vis);
                }     
            }    
        }
        return ans;
    }

int main()
{
    FASTIO;
    cin>>n>>m;
    vector<string> v(n);
    // vector<vector<int>> vis(n,vector<int>(m));
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
            int f=0;
            if(v[i][j]=='C')
            {
                if(i<n-1 && v[i+1][j]=='L') f=1;
                if(i>0 && v[i-1][j]=='L') f=1;
                if(j<m-1 && v[i][j+1]=='L') f=1;
                if(j>0 && v[i][j-1]=='L') f=1;
                if(f) v[i][j]='L';
                else v[i][j]='W';
            }
        }
    }
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='L') a[i][j]='1';
            else a[i][j] ='0';
        }
    }
    int x=numIslands(a);
    cout<<x<<"\n";
}