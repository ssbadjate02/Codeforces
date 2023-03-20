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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ans,ans2;
        cin>>n>>m;
        if(n>m) swap(n,m);
        ans=m-n;
        if(m==n)
        {
            cout<<"0 0\n";
            continue;
        }
        ll x=m/ans;
        ll y=n/ans;
        if(m-ans*x==n-ans*y) ans2=m-ans*x;
        if(ans*(x+1)-m==ans*(y+1)-n) ans2=min(ans2,ans*(x+1)-m);
        ans2=min(ans2,n);
        cout<<ans<<" "<<ans2<<"\n";
    }   
}