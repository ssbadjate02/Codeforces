#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<int>> dp(505,vector<int>(505,-1)),v;
int n,m;
int f(int i,int j)
{
    if(i==n-1) return v[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int a=0,b=0,c=0;
    b=f(i+1,j);
    if(j>0) a=f(i+1,j-1);
    if(j<m-1) c=f(i+1,j+1);
    return dp[i][j]=max({a,b,c})+v[i][j];
}

int g(int i,int j)
{
    if(i==0) return v[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int a=0,b=0,c=0;
    b=g(i-1,j);
    if(j>0) a=g(i-1,j-1);
    if(j<m-1) c=g(i-1,j+1);
    return dp[i][j]=max({a,b,c})+v[i][j];
}

int maxPathSum(vector<vector<int>> board,int p,int q)
{
    v=board;
    n = v.size();
    m = v[0].size();

    int ans1=f(0,p);
    dp.clear();
    dp.resize(n,vector<int>(m,-1));
    int ans2=g(n-1,q);
    return max(ans1,ans2);
}

int main()
{
    FASTIO;
    int n,m,p,q;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cin>>v[i][j];
    }
    cin>>p>>q;
    cout<<maxPathSum(v,p,q);
}