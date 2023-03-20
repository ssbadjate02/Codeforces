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
        string s;
        cin>>s;
        ll ab=0,ba=0;
        for(ll i=0;i+1<s.size();i++)
        {
            if(s[i]=='a' && s[i+1]=='b') ab++;
            else if(s[i]=='b' && s[i+1]=='a') ba++;
        }
        if(ab==ba) cout<<s;
        else
        {
            if(s[0]=='a') s[0]='b';
            else s[0]='a';
            cout<<s;
        }
        cout<<"\n";
    }   
}