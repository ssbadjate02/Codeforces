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
    vector<ll> v(300005);
    ll a=0;
    for(ll i=0;i<300005;i++)
    {
        a=a^i;
        v[i]=a;
    }   
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(v[a-1]==b) cout<<a<<"\n";
        else
        {
            if(v[a]==b) cout<<a+2<<"\n";
            else cout<<a+1<<"\n";
        } 
    }
}
