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
        ll n,m,maxans=0;
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) cin>>v[i][j];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll ans=0;
                for(ll l=j,k=i;k<n&&l<m;k++,l++)
                {
                    ans+=v[k][l];
                }
                for(ll k=i,l=j;k>=0&&l<m && k<n;k--,l++)
                {
                    ans+=v[k][l];
                }
                for(ll l=j,k=i;k<n&&l>=0;k++,l--)
                {
                    ans+=v[k][l];
                }
                for(ll l=j,k=i;k>=0&&l>=0;k--,l--)
                {
                    ans+=v[k][l];
                }
                ans-=3*v[i][j];
                maxans=max(maxans,ans);
            }
        }
        cout<<maxans<<"\n";
    }   
}