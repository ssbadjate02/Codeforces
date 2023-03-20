#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll f(set<ll> e, set<ll> o)
{
    ll i=0,ans=0;
    for(auto e1:e)
    {
        ans+=abs(e1-i);
        i+=2;
    }
    i=1;
    for(auto e1:o)
    {
        ans+=abs(e1-i);
        i+=2;
    }
    return ans;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<ll> e;
        set<ll> o;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a%2) o.insert(i);
            else e.insert(i);
        }
        if(n%2==0)
        {
            if(o.size()!=e.size())
            {
                cout<<"-1\n";
                continue;
            }            
            ll minn=min(f(e,o),f(o,e));
            cout<<minn/2<<"\n";
        }
        else
        {
            if(o.size()>e.size()) swap(o,e);
            if(e.size()!=o.size()+1)
            {
                cout<<"-1\n";
                continue;
            }
            cout<<f(e,o)/2<<"\n";
        }
    }   
}