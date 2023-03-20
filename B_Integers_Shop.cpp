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
        ll minl=1e9,minr=1e9,l=1e9,r=-1;
        map<pair<ll,ll>,ll> m;
        for(ll i=0;i<n;i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            if(m.find({a,b})!=m.end()) m[{a,b}] = min(c,m[{a,b}]);
            else m[{a,b}] = c;
            if(a<l)
            {
                minl=c;
                l=a;
            }
            else if(a==l)
            {
                minl=min(minl,c);
            }
            if(b>r)
            {
                r=b;
                minr=c;
            }
            else if(b==r) minr=min(minr,c);
            if(m.find({l,r})!=m.end() && m[{l,r}]<=minr+minl) cout<<m[{l,r}]<<"\n";
            else cout<<minr+minl<<"\n";
        }
    }   
}