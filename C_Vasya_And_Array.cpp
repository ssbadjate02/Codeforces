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
    ll n,m;
    cin>>n>>m;
    vector<ll> v1(n+5,-1),ans1(n+5),v2(n+5,-1),ans2(n+5);
    vector<ll> lv(m),rv(m),tv(m);
    for(ll i=0;i<m;i++)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        tv[i]=t;
        lv[i]=l;
        rv[i]=r;
        for(ll j=l;j<=r;j++)
        {
            if(t) v1[j]=0;
            else v1[j]=-1;
        }   
    }
    ans1[1]=5;
    // for(ll i=1;i<=n;i++)
    for(ll i=2;i<=n;i++)
    {
        ans1[i]=ans1[i-1]+v1[i-1];
    }
    ans2[n]=ans1[n];
    for(ll i=m-1;i>=0;i--)
    {
        ll t,l,r;
        t=tv[i];
        l=lv[i];
        r=rv[i];
        for(ll j=l;j<=r;j++)
        {
            if(t) v2[j]=1;
            else v2[j]=0;
        } 
    }
    for(ll i=n-1;i>=0;i--)
    {
        ans2[i]=ans2[i+1]+v2[i+1];
    }
    for(ll i=1;i<=n;i++)
    {
        if(ans1[i]!=ans2[i])
        {
            cout<<"NO\n";
            // return 0;
        }
    }
    cout<<"YES\n";
    for(ll i=1;i<=n;i++) cout<<ans1[i]<<" ";
    cout<<"\n";
    for(ll i=1;i<=n;i++) cout<<ans2[i]<<" ";
}