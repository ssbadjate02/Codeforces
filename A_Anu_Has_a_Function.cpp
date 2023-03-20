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
    ll n,x=1,ans=-1,ansi;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i],x=x&(!v[i]);
    for(ll i=0;i<n;i++)
    {
        if(v[i]|x>ans)
        {
            ansi=i;
            ans=v[i]|x;
        }
    }
    cout<<v[ansi]<<" ";
    for(ll i=0;i<n;i++)
    {
        if(i!=ansi) cout<<v[i]<<" ";
    }   
}