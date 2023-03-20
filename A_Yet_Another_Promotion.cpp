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
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        //buying all on 1st day
        ll x = n/(m+1)*m*a + n%(m+1)*a;
        //buying all on 2nd day
        ll y = n*b;
        //buying n/(m+1)*m on 1st day and remaining on 2nd day
        ll z = n/(m+1)*m*a + n%(m+1)*b;
        cout<<min({x,y,z})<<"\n"; 
    }   
}