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
        ll n,ans=0;
        cin>>n;
        string s,tem;
        cin>>s;
        tem=s;
        char c=s[0];
        sort(tem.begin(),tem.end());
        for(ll i=0;i<n;i++)
        {
            if(s[i]!=tem[i]) ans++;
        }

        cout<<ans<<"\n";
    }   
}