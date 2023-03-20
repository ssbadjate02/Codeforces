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
        ll n=0;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='E') n++;
        }
        // cout<<n<<"\n";
        if(n==s.size()-1) cout<<"NO\n";
        else cout<<"YES\n";
    }      
}