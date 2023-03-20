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
        ll n,m,minans=1e9;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                ll ans=0;
                for(ll k=0;k<m;k++)
                {
                    ans+=abs(v[i][k]-v[j][k]);
                }
                minans=min(minans,ans);
            }
        }
        cout<<minans<<"\n";
    }    
}