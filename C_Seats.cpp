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
    ll n,m,s=0,maxx=0;
    cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i],s+=v[i],maxx=max(maxx,v[i]);
    cout<<max((double)maxx,ceil((double)(s+m)/(double)n))<<" "<<maxx+m;

}