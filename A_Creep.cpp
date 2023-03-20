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
        vector<char> v(a+b,' ');
        ll x=0,y=0;
        for(ll i=0;i<a+b && x<a;i+=2,x++)
        {
            v[i]='0';
        }
        for(ll i=1;i<a+b && y<b;i+=2,y++)
        {
            v[i]='1';
        }
        if(x<a) for(ll i=0;i<a+b;i++) if(v[i]==' ') v[i]='0';
        if(y<b) for(ll i=0;i<a+b;i++) if(v[i]==' ') v[i]='1';
        for(ll i=0;i<a+b;i++) cout<<v[i];
        cout<<"\n";
    }   
}