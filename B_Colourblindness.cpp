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
        ll n;
        string a,b;
        cin>>n>>a>>b;
        for(ll i=0;i<n;i++) 
        {
            if(a[i]=='G') a[i]='B';
            if(b[i]=='G') b[i]='B';
        }
        cout<<(a==b?"YES\n":"NO\n");
    }   
}