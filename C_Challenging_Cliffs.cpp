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
        sort(v.begin(),v.end());
        ll minn=1e9,j=0;
        if(n==2)
        {
            cout<<v[0]<<" "<<v[1]<<"\n";
            continue;
        }
        for(ll i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]<minn)
            {
                j=i+1;
                minn=v[i+1]-v[i];
            }
        }
        for(ll i=j;i<n;i++) ans.pb(v[i]);
        for(ll i=0;i<j;i++) ans.pb(v[i]);
        for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }   
}