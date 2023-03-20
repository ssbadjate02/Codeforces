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
    ll t,tt=0;
    cin>>t;
    while(t--)
    {
        tt++;
        ll n,x,y,f=0,z;
        cin>>n>>x>>y;
        ll sum=n*(n+1)/2;
        // cout<<sum<<"\n";
        for(ll i=1;;i++)
        {
            ll xx=i*x;
            ll yy=i*y;
            if(xx+yy==sum) 
            {
                f=1;
                z=xx;
            }
            if(xx+yy>sum) break;
        }
        ll ans=0,i=n;
        set<ll> s;
        if(f)
        {
            while(z>i)
            {
                s.insert(i);
                z-=i;
                i--;
                ans++;
            }
            s.insert(z);
        }
        if(f) 
        {
            cout<<"Case #"<<tt<<": "<<"POSSIBLE"<<"\n";
            cout<<s.size()<<"\n";
            for(auto e:s) cout<<e<<" ";
            cout<<"\n";
        }
        else cout<<"Case #"<<tt<<": "<<"IMPOSSIBLE"<<"\n";
    }
    
}