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
    
    string s;
    cin>>s;
    ll n=s.size(),f=0,g=0;
    vector<ll> v(n);
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            if(v[i]!=1 && v[i+1]!=1)
            {
                f=1;
                v[i]=1;
                v[i+1]=1;
                break;
            }
        }
    }
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            if(v[i]!=1 && v[i+1]!=1)
            {
                g=1;
                v[i]=1;
                v[i+1]=1;
                break;
            }
        }
    }
    if(f&&g)
        {
            cout<<"YES\n";
            return 0;
        }    
    f=0,g=0;
    v.clear();
    v.resize(n,0);
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            if(v[i]!=1 && v[i+1]!=1)
            {
                g=1;
                v[i]=1;
                v[i+1]=1;
                break;
            }
        }
    }
     for(ll i=0;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            if(v[i]!=1 && v[i+1]!=1)
            {
                f=1;
                v[i]=1;
                v[i+1]=1;
                break;
            }
        }
    }
    if(f && g) cout<<"YES\n";
        else cout<<"NO\n";
}
