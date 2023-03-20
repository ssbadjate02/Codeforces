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
    vector<vector<ll>> v(n,vector<ll>(n));
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(ll j=0;j<n;j++)
        {
            char a=s[j];
            v[i][j]=(a=='#');
        }
    }   
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(v[i][j]==0)
            {
                if(j>0 && j<n-1 && i<n-2 && v[i+1][j]==0 && v[i+1][j-1]==0 && v[i+1][j+1]==0 && v[i+2][j]==0) 
                {
                    v[i][j]=1;
                    v[i+1][j]=1;
                    v[i+1][j-1]=1;
                    v[i+1][j+1]=1;
                    v[i+2][j]=1;
                }
                else
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"YES\n";
}