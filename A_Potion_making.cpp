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
        ll e,ans=100;
        cin>>e;
        vector<ll> v={2,5,};
        while(e%2==0 && ans%2==0)
        {
            e/=2;
            ans/=2;
        }
        while(e%5==0 && ans%5==0)
        {
            e/=5;
            ans/=5;
        }
        
        cout<<ans<<"\n";
    }
} 