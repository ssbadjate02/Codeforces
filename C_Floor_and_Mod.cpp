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
        ll x,y,ans=0;
        cin>>x>>y;
        for(ll i=1;i*i<=x;i++)
        {
            ans+=max(0ll,min(y-i,x/i-1-i));
        }
        cout<<ans<<"\n";
    }

}