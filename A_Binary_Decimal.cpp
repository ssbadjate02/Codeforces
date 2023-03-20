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
        char maxx='0';
        for(ll i=0;i<s.size();i++)
        {
            maxx=max(maxx,s[i]);
        }
        cout<<maxx<<"\n";
    }   
}