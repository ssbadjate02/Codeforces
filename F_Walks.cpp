#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll n,m,x,y,ans=0;
    cin>>n>>m>>x>>y;
    ll k;
    cin>>k;
    // cout<<"1\n";
    for(ll i=0;i<k;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll t1=10000000000,t2=100000000000;
        if(a>0) t1=(n-x)/a;
        else if(a<0) t1=(x-1)/abs(a);
        if(b>0) t2=(m-y)/b;
        else if(b<0) t2=(y-1)/abs(b);
        ll yo=min(t1,t2); 
        x+=yo*a;
        y+=yo*b;
        ans+=yo;
    }   
    cout<<ans<<"\n";
}