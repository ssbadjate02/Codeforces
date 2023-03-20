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
    ll n,m,q;
    cin>>n>>m>>q;
    vector<vector<ll>> v(n+1,vector<ll>(n+1,1e15));
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a][b]=min(v[a][b],c);
        v[b][a]=min(v[b][a],c);
    }   
    for(ll i=0;i<=n;i++) v[i][i]=0;
    for(ll k=1;k<=n;k++)
    {
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
            }
        }
    }
    for(ll i=0;i<q;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(v[a][b]<1e15) cout<<v[a][b]<<"\n";
        else cout<<"-1\n";
    }
}