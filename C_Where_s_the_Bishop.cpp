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
        vector<string> v(8);;
        for(ll i=0;i<8;i++) cin>>v[i];
        for(ll i=1;i<7;i++)
        {
            for(ll j=1;j<7;j++)
            {
                if(v[i+1][j+1]=='#' && v[i+1][j-1]=='#' && v[i-1][j+1]=='#' && v[i-1][j-1]=='#')
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                }
            }
        }
    }   
}