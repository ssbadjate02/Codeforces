#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const ll N=1e11;
int main()
{
    FASTIO;
    ll n,ans=0;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<min(n,40ll);i++)
    {
        set<ll> s;
        s.insert(abs(v[i]-1));
        for(ll j=2;j*j<=v[i];j++)
        {
            ll k=1;
            for(ll l=0;l<i && k<N;l++) k*=j;
            s.insert(abs(k-v[i]));
        }
        ans+=*s.begin();
    }
    for(ll i=40;i<n;i++) ans+=(v[i]-1);
    cout<<ans<<"\n";
}