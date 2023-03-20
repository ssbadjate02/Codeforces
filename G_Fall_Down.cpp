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
        ll n,m;
        cin>>n>>m;
        vector<string> v(n);
        vector<vector<ll>> x(n,vector<ll>(m));
        vector<vector<char>> ans(n,vector<char>(m,'.'));
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll j=0;j<m;j++)
        {
            ll c=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i][j]=='*')c++;
                if(v[i][j]=='o' || i==n-1)
                {
                    x[i][j]=c;
                    c=0;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]=='o' || i==n-1)
                {
                    ll k=i;
                    if(v[i][j]=='o') k--,ans[i][j]='o';
                    for(;k>=0 && x[i][j]>0;k--)
                    {
                        ans[k][j]='*';
                        x[i][j]--;
                    }
                }
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