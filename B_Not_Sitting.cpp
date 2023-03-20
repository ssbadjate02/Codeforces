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
        ll n,m;
        cin>>n>>m;
        multiset<ll> s;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                ll a=abs(i-1)+abs(j-1);
                ll b=abs(i-n)+abs(j-1);
                ll c=abs(i-1)+abs(j-m);
                ll d=abs(i-n)+abs(j-m);
                // cout<<i<<" "<<j<<"---"<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
                s.insert(max({a,b,c,d}));
            }
        }
        for(auto e:s) cout<<e<<" ";
        cout<<"\n";
    }   
}