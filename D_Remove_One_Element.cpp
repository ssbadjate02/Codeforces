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
    ll n,x=1,ans=0;
    cin>>n;
    vector<ll> v(n),p(n),s(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        p[i]=x;
        if(i!=0 && v[i]>v[i-1]) x++;
        else ans=max(ans,x),x=1;
    } 
    ans=max(ans,x);
    x=1;
    p[0]=0; 
    for(ll i=n-1;i>=0;i--)
    {
        s[i]=x;
        if(i!=n-1 && v[i]<v[i+1]) x++;
        else x=1;
    }  
    s[n-1]=0;
    // for(ll i=0;i<n;i++) cout<<p[i]<<" ";
    // cout<<"\n";
    // for(ll i=0;i<n;i++) cout<<s[i]<<" ";
    // cout<<"\n";
    for(ll i=1;i<n-1;i++)
    {
        if(v[i-1]<v[i+1]) ans=max(ans,p[i]+s[i]);
    }
    cout<<ans<<"\n";
}