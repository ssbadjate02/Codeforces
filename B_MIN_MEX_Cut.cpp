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
        ll n=s.size(),c=0;
        if(s[0]=='0') c++;
        for(ll i=1;i<n;i++)
        {
            if(s[i]=='0' && s[i-1]!='0') c++;
        }
        if(c<=2)
        {
            cout<<c<<"\n";
        }
        else cout<<"2\n";
    }   
}