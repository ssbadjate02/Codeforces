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
        ll n,c=0;
        cin>>n;
        string s;
        cin>>s;
        vector<ll> v(n),ps(n);
        map<ll,ll> m;
        m[0]++;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            c+=s[i]-'0';
            ps[i]=c-i-1;
            ans+=(m[ps[i]]++);
        }
        cout<<ans<<"\n";
    }   
}