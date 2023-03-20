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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),dp(k+1);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<=k;i++)
    {
        if(i<v[0]) dp[i]=0;
        else
        {
            for(ll j=0;j<n;j++)
            {
                if(i>=v[j])
                {
                    if(dp[i-v[j]]==0)
                    {
                        dp[i]=1;
                        break;
                    }
                }
            }
        }
    }   
    map<ll,string> m;
    m[0]="Second";
    m[1]="First";
    cout<<m[dp[k]];
}