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
        ll a,b;
        cin>>a>>b;
        ll noa=ceil(double(a+b)/(double)2);
        ll nob=(a+b)/2;
        set<ll> ans;
        ll x=max(a-noa,b-nob);
        ll y=min(a,nob) + min(b,noa);
        for(ll i=x;i<=y;i+=2) ans.insert(i);
        swap(noa,nob);
        x=max(a-noa,b-nob);
        y=min(a,nob) + min(b,noa);
        for(ll i=x;i<=y;i+=2) ans.insert(i);
        // sort(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for(auto e:ans) cout<<e<<" ";
        cout<<"\n";
    }   
}