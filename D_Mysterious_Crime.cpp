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
    ll n,m,ans=0;
    cin>>n>>m;
    vector<vector<ll>> v(m,vector<ll>(n));
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++) cin>>v[i][j];
    }
    if(m==1)
    {
        cout<<(n*(n+1)/2);
        return 0;
    }
    vector<ll> a(n+1);
        for(ll i=0;i<n;i++) a[v[0][i]]=(i+1);
 
        for(ll i=0;i<m;i++)
        {
            for(ll j=0;j<n;j++)
            {
                v[i][j]=a[v[i][j]];
            }
        }
    vector<ll> s(n+1,1e9);
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll siz=1,x=j;
            while(j<n-1 && v[i][j]+1==v[i][j+1]) j++,siz++;
            for(ll k=v[i][x];k<=v[i][j];k++)
            {
                if(siz-k+v[i][x]<s[k]) s[k]=siz-k+v[i][x];
            }
        }
    }
    ll i=1;
    while(i<=n)
    {
        // cout<<s[i]<<" ";
        ans+=s[i]*(s[i]+1)/2;
        i+=s[i];
    }
    cout<<ans<<"\n" ;  
}