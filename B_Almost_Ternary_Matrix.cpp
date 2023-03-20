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
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i+=2)
        {
            for(int j=0;j<m;j+=2)
            {
                if(i%4==j%4)
                {
                    v[i][j] = 1;
                    v[i+1][j] = 0;
                    v[i][j+1] = 0;
                    v[i+1][j+1] = 1;
                }
                else if(i%4!=j%4)
                {
                    v[i][j] = 0;
                    v[i+1][j] = 1;
                    v[i][j+1] = 1;
                    v[i+1][j+1] = 0;   
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }   
}
/*
1 0 0 1 1 0 0 1
0 1 1 0 0 1 1 0
0 1 1 0 0 1 1 0
1 0 0 1 1 0 0 1
*/

