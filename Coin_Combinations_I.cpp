#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N = 1e9+7;

int dp[1000005] = {0};
int v[101] = {0};

int main()
{
    FASTIO;
    int n,x;
    cin>>n>>x;
    // int v[n];
    for(int i=0;i<n;i++) cin>>v[i];
    if(x<v[0])
    {
        cout<<0;
        return 0;
    }
    // int dp[x+1]={0};
    dp[0] = 1;
    for (int i = 1; i <= x; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i-v[j] >= 0) 
            {
                (dp[i] += dp[i-v[j]]) %= N;
            }
        }
    }
cout << dp[x] << endl;
}