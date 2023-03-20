#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<pair<ll,ll>>> dp(21,vector<pair<ll,ll>>(21));

int main()
{
    for(ll i=1;i<21;i++)
    {
        for(ll j=1;j<21;j++)
        {
            ll f=0;
            for(ll x=0;x<205 ;x++)
            {
                for(ll y=0;y<150;y++)
                {
                    if(2*x+3*y==i*j)
                    {
                        dp[i][j]={x,y};
                        f=1;
                        break;
                    }
                }
                if(f) break;
            }
        }
    }
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        
    }

}