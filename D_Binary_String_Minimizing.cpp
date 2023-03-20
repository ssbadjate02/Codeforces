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
        ll n,k,j=0;
        string s;
        cin>>n>>k>>s;
        while(s[j]=='0') j++;
        for(ll i=j;i<n;i++)
        {
            if(s[i]=='0')
            {
                ll x=max(min(j,n-1),i-k);
                s[x]='0';
                k-=(i-x);;
                s[i]='1';
                while(s[j]=='0') j++;
            }
            if(k<=0) break;
        }
        cout<<s<<"\n";
    }
}