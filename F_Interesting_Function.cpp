#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll ChangeDigits(ll x)
{
    string s=to_string(x);
    ll ans=0,c,m=0;
    for(ll i=0;i<s.size();i++)
    {
        c=s[i]-'0'+10*m;
        ans+=c;
        m=c;
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
        ll a,b,da=0,db=0;
        cin>>a>>b;
        cout<<ChangeDigits(b) - ChangeDigits(a)<<"\n";
        
    }   
}