#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int f(int x,int y,int z)
{
    return ((x<y && y>z) || (x>y && y<z));

}
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        // ll ans=0;
        ans=2*n-1;
        for(ll i=1;i<n-1;i++)
        {
            ans+=f(v[i-1],v[i],v[i+1]);
        }
        for(ll i=0;i<n-3;i++)
        {  
            if(f(v[i],v[i+1],v[i+2]) && f(v[i],v[i+1],v[i+3]) && f(v[i],v[i+2],v[i+3]) && f(v[i+1],v[i+2],v[i+3])) ans+=1;
        }
        cout<<ans<<"\n";
    }   
}