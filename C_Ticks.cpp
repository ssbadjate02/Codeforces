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
        ll n,m,c;
        cin>>n>>m>>c;
        vector<string> v(n);
        vector<vector<ll>> ans(n,vector<ll>(m));
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]=='*')
                {
                    ll l=i,k=j,x1=0,x2=0;
                    while(l>=0 && k>=0 && v[l][k]=='*') x1++,l--,k--;
                    l=i,k=j;
                    while(l>=0 && k<m && v[l][k]=='*') x2++,l--,k++;
                    ll x=min(x1,x2);
                    // cout<<x;
                    if(x>=c+1)
                    {
                        l=i;
                        k=j;
                        x1=x;
                        x2=x;
                        while(x1--) ans[l][k]=1,l--,k--;
                        l=i,k=j;
                        while(x2--) ans[l][k]=1,l--,k++;
                    }
                } 
                // else cout<<" ";  
            }
            // cout<<"\n";
        }
        ll f=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                // cout<<ans[i][j];
                if(v[i][j]=='*' && ans[i][j]!=1)
                {
                    f=1;
                    break;
                }
            }
            // cout<<"\n";
            if(f) break;
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}