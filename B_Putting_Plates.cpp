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
        vector<vector<ll>> ans(n,vector<ll>(m));
        if(n%2 && m%2)
        {
            for(ll i=0;i<n;i+=2)
            {
                ans[i][0]=1;
                ans[i][m-1]=1;
            }
            for(ll j=0;j<m;j+=2)
            {
                ans[0][j]=1;
                ans[n-1][j]=1;
            }
        }
        else if(m%2==0 && n%2)
        {
            for(ll j=0;j<m;j++)
            {
                if(j%2) ans[0][j]=1;
                else ans[n-1][j]=1;
            }
            for(ll i=2;i<n-1;i+=2)
            {
                ans[i][0]=1;
                ans[i][m-1]=1;
            }
        }   
        else if(m%2 && n%2==0)
        {
            for(ll j=0;j<n;j++)
            {
                if(j%2) ans[j][0]=1;
                else ans[j][m-1]=1;
            }
            for(ll i=2;i<m-1;i+=2)
            {
                ans[0][i]=1;
                ans[n-1][i]=1;
            }
        }
        else
        {
            for(ll i=1;i<n-1;i++)
            {
                if(i%2) ans[i][0]=1;
                else ans[i][m-1]=1;
            }
            for(ll j=1;j<m-1;j++)
            {
                if(j%2)ans[n-1][j]=1;
                else ans[0][j]=1;
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) cout<<ans[i][j];
            cout<<"\n";
        }
        cout<<"\n";
    }
}