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
        vector<ll> v(3);
        ll n=s.size();
        for(ll i=0;i<n;i++) v[s[i]-'A']++;
        if(v[0]+v[2]==v[1])
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }   
}