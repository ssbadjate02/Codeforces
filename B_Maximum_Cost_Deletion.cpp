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
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b>=0)
        {
            cout<<n*a+n*b<<"\n";
        }
        else
        {
            ll nog0=0,nog1=0,ans=0;
            for(ll i=1;i<n;i++)
            {
                if(s[i]=='0' && s[i-1]=='1') nog1++;
            }
            if(s[n-1]=='1') nog1++;
            for(ll i=1;i<n;i++)
            {
                if(s[i]=='1' && s[i-1]=='0') nog0++;
            }
            if(s[n-1]=='0') nog0++;
            if(nog1>nog0) ans=n*a+nog0*b+b;
            else ans=n*a+nog1*b+b;
            cout<<ans<<"\n";
        }
    }   
}