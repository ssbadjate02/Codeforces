#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const ll N = 1e9+7;

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
        ll p;
        vector<ll> dp(n+1);
        while(s[i]=='F') i++;
        if(s[i]=='X') c='X';
        else c='O';
        p=i;
        for(ll j=i+1;j<n;j++)
        {
            if(s[j]!='F')
            {
                if(s[j]!=c)
                {
                    dp[j]+=(p+1);
                    dp[j]%=N;
                    c=s[j];
                    p=j;
                }
                else p=j;
            }
            dp[j]=(dp[j]%N + dp[j-1]%N)%N;
        }
        for(ll i=0;i<n;i++) ans=(ans%N + dp[i]%N)%N;
        cout<<"Case #"<<x<<": ";
        cout<<ans%N<<"\n";
    }   
}