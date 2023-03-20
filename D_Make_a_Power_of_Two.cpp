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
    vector<string> v;
    for(ll i=1;i<=1e18+7;i*=2) v.pb(to_string(i));
    FASTIO;   
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size(),ans=1e9+7;
        for(ll i=0;i<v.size();i++)
        {
            string a=v[i];
            ll m=a.size();
            {
                ll j=0,p=0;
                for(ll k=0;k<n;k++)
                {
                    if(a[j]==s[k]) j++;
                    else p++;
                }
                ans=min(ans,p+m-j);
            }
        }
        cout<<ans<<"\n";
    }
}