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
    ll n;
    cin>>n;
    vector<ll> v(n),a;
    map<ll,ll> m;
    for(ll i=0;i<n;i++) 
    {
        cin>>v[i];
        m[v[i]]++;
        if(v[i]==0) a.pb(i);
    }
    ll j=1;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            while(m[j]) j++;
            v[i]=j;
            m[j]++;
        }
    } 
    if(v[a[0]]==a[0]+1) swap(v[a[0]],v[a[a.size()-1]]);
    for(ll i=1;i<a.size();i++)
    {
        if(v[a[i]]==a[i]+1) swap(v[a[i]],v[a[i-1]]);
    }
    for(ll i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<"\n";
}