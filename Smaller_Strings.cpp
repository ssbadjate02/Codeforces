#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 1000000007

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    FASTIO;
    ll t,z;
    cin>>t;
    z=t;
    while(t--)
    {
        ll n,k,ans=0,x=1,f=0;
        string s,te;
        cin>>n>>k>>s;
        vector<ll> p;
        for(ll i=0;i<n;i++)
        {
            p.pb(x);
            x=(x*k)%N;
            // cout<<p[i]<<" ";
        }
        // cout<<"\n";
        
        te=s;
        for(ll i=0;i<=(n-1)/2;i++)
        {
            ans+=((s[i]-'a')*p[(n-1)/2-i])%N;
        }
        for(ll i=0;i<=(n-1)/2;i++)
        {
            if(s[i]>s[n-i-1]) f=1;
        }
        reverseStr(s);
        if(s==te) f=1;
        if(!f) ans = (ans+1)%N;
         cout<<"Case #"<<z-t<<": "<<ans<<"\n";
    }   
}