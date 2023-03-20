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
/*

*/
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    vector<ll> p;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        if(x>=n)
        {
            cout<<"1\n";
            continue;
        }
        if(x==0 && n%2)
        {
            cout<<"-1\n";
            continue;
        }
        ll y=1;
        while(y<=x)
        {
            y*=4;
        }
        y/=4;
        n-=y;
        ll i=0,ans=0;
        if(y) ans++;
        cout<<y<<" ";
        while(n>0)
        {
            if(n%2)
            {
                if(i%2==0) ans+=2;
                else ans++;
            }
            i++;
            n/=2;
        }
        cout<<ans<<"\n";
    }
}