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
        ll n=s.size(),c=0;
        vector<ll> v(26);
        for(ll i=0;i<n;i++)
        {
            if(v[s[i]-'a']<2)v[s[i]-'a']++;
        }
        for(ll i=0;i<26;i++) c+=v[i];
        cout<<c/2<<"\n";
    }   
}