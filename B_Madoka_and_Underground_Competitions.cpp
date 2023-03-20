#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,r,c;
        cin>>n>>k>>r>>c;
        r--;
        c--;
        vector<vector<char>> v(n,vector<char>(n,'.'));
        vector<ll> vis(2*n+1);
        // for(ll i=r;i>=0;i-=k) v[i][c] = 'X';
        // for(ll i=c;i>=0;i-=k) v[r][i] = 'X';
        // for(ll i=r;i<n;i+=k) v[i][c] = 'X';
        // for(ll i=r;i<n;i+=k) v[r][i] = 'X';
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                // if(v[i][j]=='X' && vis[i+j]!=1)
                // {
                //     ll x=i;
                //     ll y=j;
                //     while(x<n && y>=0)
                //     {
                //         v[x][y]='X';
                //         x++;
                //         y--;
                //     }
                //     x=i;
                //     y=j;
                //     while(y<n && x>=0)
                //     {
                //         v[x][y]='X';
                //         x--;
                //         y++;
                //     }
                //     vis[i+j] = 1;
                // }
                if(abs(i+j-r-c)%k==0) v[i][j]='X';
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cout<<v[i][j];
            }
            cout<<"\n";
        }
    }   
}