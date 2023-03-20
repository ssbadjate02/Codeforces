#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main()
{
    ll n,c;
    cin>>n>>c;
    multiset<ll,greater<ll>> s;
    set<ll,greater<ll>> s1;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
        s1.insert(a);
    }
    ll ans=0;
    s.insert(0);
    while(c && s.size())
    {
        if(*s1.begin()==*s.begin()) s1.erase(s1.begin());
        ll x = *s.begin();
        ll y = s1.size()?*s1.begin():0ll;
        s.erase(s.begin());
        if(x!=1)s.insert(y);
        if(c>x-y) ans+=x*(x+1)/2-y*(y-1)/2,c-=(x-y);
        else ans+=c*(c-1)/2,c=0;
    }
    cout<<ans<<"\n";
    
}