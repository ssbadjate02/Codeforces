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
    ll n,k;
    cin>>n>>k;
    multiset<ll,greater<ll>> s;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        s.insert(a);
    }   
    ll ans=0;
    while(k>0)
    {
        auto it1=s.begin();
        auto it2=it1;
        if(*it1==0) break;
        it2++;
        ll y=*it1,x=*it2;
        if(k-y+x-1<0)
        {
            ans+=(y*(y+1))/2;
            y-=k;
            ans-=(y*(y+1)/2);
            break;
        }
        k-=(y-x+1);
        s.erase(it1);
        s.insert(max(x-1,0ll));
        ans+=(y*(y+1))/2-(x*(x-1))/2;
    }
    cout<<ans<<"\n";
}
// 102 100 50