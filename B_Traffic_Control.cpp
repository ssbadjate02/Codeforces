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
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        if(a<n+m-1 || b<n+m-1)
        {
            cout<<"Case #"<<x<<": Impossible";
            continue;
        }
        vector<vector<ll>> v(n,vector<ll>(m,1));
        cout<<"Case #"<<x<<": Possible\n";
        v[0][0]=a-(n+m-2);
        v[0][m-1]=b-(n+m-2);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";  
            }
            cout<<"\n";
        }
    }   
}