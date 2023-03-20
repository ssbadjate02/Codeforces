#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

// 0 0 1 2
// 1000 1001 1001 1002

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());   
    if(a==b)
    {
        cout<<"0\n";
        return 0;
    }
    ll ans=1e9+7;
    for(ll i=0;i<n;i++)
    {
        ll x=(((b[0]-a[i])%m)+m)%m;
        vector<ll> temp=a;
        for(int i=0;i<n;i++) temp[i]+=x,temp[i]%=m;
        sort(temp.begin(),temp.end());
        if(temp==b) ans=min(ans,x);
    }
    cout<<ans<<"\n";
}