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

//0 1 1 0 1 0 1 1 0 1 1
int main()
{
    FASTIO;
    ll t,tt;
    cin>>t;
    tt = t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<"Case #"<<tt-t<<": "<<(n+4)/5<<"\n";
    }   
}