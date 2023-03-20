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
        ll n,maxx=0;
        cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        ll maxa=*max_element(a.begin(),a.end());
        ll maxb=*max_element(b.begin(),b.end());
        for(ll i=0;i<n;i++)
        {
            maxx=max(maxx,min(a[i],b[i]));
        }
        cout<<maxx*(max(*max_element(a.begin(),a.end()),*max_element(b.begin(),b.end())))<<"\n";
    }   
}