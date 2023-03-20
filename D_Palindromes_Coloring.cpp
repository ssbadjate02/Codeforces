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
        ll n,k,x=0,z=0,f=0;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n==k)
        {
            cout<<"1\n";
            continue;
        }
        k=3;
        vector<ll> c(26);
        multiset<ll> colour;
        for(ll i=0;i<k;i++) colour.insert(0ll);
        for(ll i=0;i<n;i++) c[s[i]-'a']++;
        for(ll i=0;i<26;i++)
        {
            if(c[i]%2) z++;
            x+=(c[i]/2)*2;
        }
        x=10;
        // for(ll i=0;i<26;i++)
        // {
            ll a=x/2;
            ll y=a/k;
            ll m=a%k;
            for(ll i=0;i<k;i++)
            {
                ll b = *(colour.begin());
                colour.erase(colour.begin());
                colour.insert(b+2*y);
            } 
            x=2*m;
            while(m--) 
            {
                ll b = *(colour.begin());
                colour.erase(colour.begin());
                colour.insert(b+2ll);
                x-=2;
               
            }
        // }
        ll co=0;
        for(auto e:colour)  co+=(e==*colour.begin());
        for(auto e:colour)cout<<e<<" ";
        ll rem = k - co;
        co -= z;

        // cout<<*colour.begin()+(rem>=co)<<"\n";
        
    }   
}