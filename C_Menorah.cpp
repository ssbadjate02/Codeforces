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
        string s,b;
        cin>>s>>b;
        cin>>s>>b;
        ll n=s.size(),f=0;
        ll c1,c2;
        for(ll i=0;i<n;i++) c1+=s[i]-'0';
        for(ll i=0;i<n;i++) c2+=b[i]-'0';
        if(c1!=c2 && n-c1+1!=c2) f=1;
        
    }   
}