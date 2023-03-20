#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
const int MOD = 1e9+7;


int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<vector<int>> v(m,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) cin>>v[i];
        }
    }   
}