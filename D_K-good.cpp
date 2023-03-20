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
        ll n,ans=-1;
        cin>>n;
        ll k = 2,x=n;
        while(k*(k+1)/2<=n)
        {
            if(n%k==0)
            {
                ans=k;
                break;
            }
                k*=2;
        }       
        while(n%2==0) n/=2;
        if(n*(n-1)/2<=x) ans=n;
        cout<<ans<<"\n";
    }   
}