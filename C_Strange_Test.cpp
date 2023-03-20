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
        ll a,b;
        cin>>a>>b;
        ll ans=b-a;
        for(ll i=a;i<b;i++)
        {
            if((i|b)==b)
            {
                ans=min(ans,i-a+1);
                break;
            }
        }
        for(ll i=b;i<10000006;i++)
        {
            if((i|a)==i)
            {
                ans=min(ans,i-b+1);
                break;
            }
        }
        cout<<ans<<"\n";
    }   
}