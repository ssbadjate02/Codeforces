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
        ll n,m,maxx=INT_MIN, maxi,maxj;
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) 
            {
                cin>>v[i][j];
                if(v[i][j]>maxx)
                {
                    maxi=i;
                    maxj=j;
                    maxx=v[i][j];
                }
            }
        }
        cout<<max(maxi+1,n-maxi)*max(maxj+1,m-maxj)<<"\n";
    }   
}