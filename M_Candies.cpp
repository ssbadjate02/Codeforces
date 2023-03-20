#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=1e9+7;

int n,k;
vector<int> v,ps;

int dp[105][100005];

int f(int i, int s)
{
    if(i==0 && s>ps[n-1]) return 0;
    if(i>0 && s>ps[n-1]-ps[i-1]) return 0;
    if(s==0) return 1;
    if(s<0) return 0;
    if(i==n && s==0) return 1;
    if(i==n) return 0;
    if(dp[i][s]!=-1) return dp[i][s];
    int x=0;
    for(int j=0;j<=v[i];j++)
    {
        x+=f(i+1,s-j);
        x%=N;
    }
    return dp[i][s]=x;
}

int main()
{
    FASTIO;
    cin>>n>>k;
    v.resize(n+1);
    ps.resize(n+1);
    int s=0;
    for(int i=0;i<=n+2;i++)
    {
        for(int j=0;j<=k+2;j++) dp[i][j]=-1;
    }
    for(int i=0;i<n;i++) cin>>v[i],s+=v[i],ps[i]=s;
    cout<<f(0,k)<<"\n";
}