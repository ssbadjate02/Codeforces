#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<int>> dp(5005,vector<int>(5005));
int lcs(int x, int y, string s1, string s2)
    {
        dp.clear();
        dp.resize(x+1,vector<int>(y+1));
         int a=0,b=0,ans=0;
         int maxx=0;
         for(int i=0;i<x;i++)
         {
             for(int j=0;j<y;j++)
             {
                 if(s1[i]==s2[j])
                 {
                     if(s1[i]==s2[j]) dp[i+1][j+1]=1+dp[i][j];
                 }
                 else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
             }
         }
        //  for(int i=0;i<=max(x,y);i++)
        //  {
        //      maxx=max(maxx,*max_element(dp[i].begin(),dp[i].end()));
        //  }
         return dp[x][y];
    }

int main()
{
    FASTIO;
    string a,b="";
    cin>>a;
    for(ll i=0;i<26;i++) b+='a'+i;
    ll x=a.size(),y=26;
    cout<<26-lcs(x,y,a,b)<<"\n";
}