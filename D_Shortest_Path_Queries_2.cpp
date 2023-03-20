#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define INF 1000000007


int main()
{
    FASTIO;
    ll n,m,ans=0;
    cin>>n>>m;
    ll graph[n][n],dist[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++) graph[i][j]=INF;
        graph[i][i]=0;
    }
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        graph[a-1][b-1]=c;
    }   

    
    
        
        for (ll k = 0; k <n; k++)
        {
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++) dist[i][j]=0;
            }
            for (ll i = 0; i < n; i++) 
            {
                for (ll j = 0; j < n; j++) 
                {
                    dist[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]); 
                    if(dist[i][j]!=INF) ans+=dist[i][j];
                }
                
            }
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++) graph[i][j]=dist[i][j];
            }
        }
        // for(ll i=0;i<n;i++)
        // {
        //     for(ll j=0;j<n;j++)
        //     {
        //         // cout<<graph[i][j]<<" ";
                
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n\n";
    
    cout<<ans;
}