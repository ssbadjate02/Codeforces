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
    ll n,q;
    string s;
    cin>>n>>q>>s;
    map<ll,ll> m;
    ll sum=0;
    for(ll i=0;i<s.size();i++)
    {
        sum+=s[i]-'a'+1;
        m[i+1]=sum;
    }
    for(ll i=0;i<q;i++)
    {
        ll a,b;
        cin>>a>>b;
        cout<<m[b]-m[a-1]<<"\n";
    }   
}