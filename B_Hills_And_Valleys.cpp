#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n;
vector<ll>v;

int h(int i)
{
    if(i==0 || i==n-1) return 0;
    return (v[i]>v[i-1] && v[i]>v[i+1]);
}

int va(int i)
{
    if(i==0 || i==n-1) return 0;
    return (v[i]<v[i-1] && v[i]<v[i+1]);
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll g=0,ans=0,minans=1e9+7;
        cin>>n;
        v.clear();
        v.resize(n);
        vector<ll> ish(n),isv(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=1;i<n-1;i++)
        {
            ish[i]=h(i);
            isv[i]=va(i);
            ans+=(ish[i]+isv[i]);
        }
        // cout<<ans<<"\n";
        // for(ll i=0;i<n;i++) cout<<isv[i]<<" ";
        // cout<<"\n";
        if(n<=2)
        {
            cout<<"0\n";
            continue;
        }
        for(ll i=1;i<n-1;i++)
        {
            // cout<<f[i]<<" ";
            ll temp=v[i];
            v[i]=v[i-1];
            minans=min(minans,ans-ish[i-1]-ish[i]-ish[i+1]+h(i)+h(i-1)+h(i+1)-isv[i]-isv[i-1]-isv[i+1]+va(i)+va(i-1)+va(i+1));
            v[i]=v[i+1];
            minans=min(minans,ans-ish[i-1]-ish[i]-ish[i+1]+h(i)+h(i-1)+h(i+1)-isv[i]-isv[i-1]-isv[i+1]+va(i)+va(i-1)+va(i+1));
            v[i]=temp;
        }
        // cout<<"\n";
        cout<<minans<<"\n";
    }   
}