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
        ll n,q;
        cin>>n>>q;
        vector<vector<ll>> v(1005,vector<ll>(1005));
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a][b]+=a*b;
        }
        for(ll i=0;i<1005;i++)
        {
            for(ll j=1;j<1005;j++)
            {
                v[i][j]+=v[i][j-1];
                // cout<<v[i][j]<<" ";
            }
            // cout<<"\n";
        }
        while(q--)
        {
            ll h1,w1,h2,w2,ans=0;
            cin>>h1>>w1>>h2>>w2;
            for(ll i=h1+1;i<h2;i++)
            {
                ans+=v[i][w2-1] - v[i][w1];
            }
            cout<<ans<<"\n";
        }
    }   
}