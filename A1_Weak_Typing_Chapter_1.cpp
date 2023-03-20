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
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        ll n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        ll i=0;
        char c;
        while(s[i]=='F') i++;
        if(s[i]=='X') c='X';
        else c='O';
        for(ll j=i+1;j<n;j++)
        {
            if(s[j]!='F')
            {
                if(s[j]!=c)
                {
                    ans++;
                    c=s[j];
                }
            }
        }
        cout<<"Case #"<<x<<": ";
        cout<<ans<<"\n";
    }   
}