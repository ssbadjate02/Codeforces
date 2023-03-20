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
        string a,b;
        cin>>a>>b;
        for(ll i=0;i<n;i++)
        {
            if(b[i]=='1' && a[i]=='0')
            {
                ans++;
                b[i]='0';
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(b[i]=='1')
            {
                if(i>0 && a[i-1]=='1') a[i-1]='0',ans++;
                else if(i<n-1 && a[i+1]=='1') a[i+1]='0',ans++;
            }
        }
        cout<<ans<<"\n";
    }   
}