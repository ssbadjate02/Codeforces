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
        ll n,maxx=0,ans=1;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i],maxx=max(maxx,a[i]);
        ll m;
        cin>>m;
        vector<ll> v(n+1);
        for(ll i=0;i<m ;i++)
        {
            ll x,y;
            cin>>x>>y;
            v[y]=max(v[y],x);
        }
        for(ll i=n-1;i;i--) v[i]=max(v[i],v[i+1]);
        if(maxx>v[1])
        {
            cout<<"-1\n";
            continue;
        }
        // for(ll i=1;i<=n;i++) cout<<v[i]<<" ";
        // cout<<"\n";
        ll j=1,mx=a[0];
        for(ll i=0;i<n;i++)
        {
            mx=max(a[i],mx);
            if(mx>v[j])
            {
                j=1;
                mx=a[i];
                ans++;
            }
            j++;
        }
        cout<<ans<<"\n";
    }   
}