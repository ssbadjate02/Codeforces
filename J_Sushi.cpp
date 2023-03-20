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
    ll n;
    cin>>n;
    vector<double> v(n);
    for(double i=0;i<n;i++) cin>>v[i];
    vector<vector<vector<double>>> dp(n+1,vector<vector<double>>(n+1,vector<double>(n+1)));
    ll i,j,k;
    for(k=0;k<n;k++)
    {
        for(j=0;j<n;j++)
        {
            for(i=0;i<n;i++)
            {
                if(i+j+k==0) continue;
                else
                {
                    dp[i][j][k]+=n/(i+j+k);
                    if(i>0) dp[i][j][k]+=dp[i-1][j][k]*((double)i/(double)(i+j+k));
                    if(j>0) dp[i][j][k]+=dp[i+1][j-1][k]*((double)j/(double)(i+j+k));
                    if(k>0) dp[i][j][k]+=dp[i][j+1][k-1]*((double)k/(double)(i+j+k));
                }
            }
        }
    }   
    cout<<dp[i][j][k];
}