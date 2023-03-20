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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(m>(n+1)/2)
        {
            cout<<"-1\n";
            continue;
        }
        ll j=0;
        vector<vector<char>> v(n,vector<char>(n,'.'));
        for(int i=0;i<n&&j<m;i+=2)
        {
            v[i][i]='R';
            j++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) cout<<v[i][j];
            cout<<"\n";
        }
    }   
}