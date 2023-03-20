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
         ll n;
        cin>>n;
        vector<ll> v(n),ans;
        for(ll i=0;i<n;i++) cin>>v[i];
        ans.pb(0);
        for(ll i=1;i<n;i++)
        {
            ll x=v[i],temp=0,j=1,y=0;
            if(i!=0) y=v[i-1]^ans[i-1];
            while(y!=0)
            {
                ll r=x%2;
                ll r1=y%2;
                x/=2;
                y/=2;
                if(r1==0) temp+=(j*(0));
                else temp+=j;
                j*=2;
            }
            ans.pb(temp);
        }
        // ll x=v[0];   
        //  while(x!=0)
        //     {
        //         ll r=x%2;
        //         x/=2;
        //         temp+=(j*(!r));
        //         j*=2;
        //     }
        //     ans.pb(temp);
        ans[0]=0;
        for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
}