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
        ll a,b;
        cin>>a>>b;
        cout<<2*(a-b)<<"\n";
        for(ll i=a-1;i>b;i--) cout<<i<<" ";
        for(ll i=b;i<=a;i++) cout<<i<<" ";
        cout<<"\n";        
        
    }   
}
/*
  a+1 a a+1 a
2*(a+1) = x
2*a = y 

*/

 