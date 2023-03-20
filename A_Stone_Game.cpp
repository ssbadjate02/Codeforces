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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll a=min_element(v.begin(),v.end())-v.begin();
        ll b=max_element(v.begin(),v.end())-v.begin();
        if(a>b) swap(a,b);
        cout<<min({a+1+abs(a-b),a+n-b+1,n-b+abs(a-b)})<<"\n";
    }   
}