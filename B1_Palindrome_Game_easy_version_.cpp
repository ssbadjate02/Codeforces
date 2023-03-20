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
        ll f=0,n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0)
        {
            cout<<"BOB\n";
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0' && i!=n/2) f=1;
        }
        if(s[n/2]=='0' && f) cout<<"ALICE\n";
        else cout<<"BOB\n";
    }   
}