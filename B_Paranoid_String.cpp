#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n>>s;
        ll c1=0,c0=0,ans=0,j=0;
        if(n==1) 
        {
            cout<<1<<"\n";
            continue;
        }
        char a = s[n-1];
        // for(ll i=1;i<n;i++)
        // {
        //     if(s[i]==a) continue;
        //     a=s[i];
        //     ans++;
        // }
        // j= n-1;
        for(ll i=n-1;i>=0;i--)
        {
            if(i==0 || s[i]==s[i-1]) ans++;
            else if(s[i]!=s[i-1]) ans+=i+1;
        }
        // vector<ll> v0(n),v1(n);
        // for(ll i=n-1;i>=0;i--)
        // {
        //     if(a=='0' || s[i]=='1') v0[i]=1;
        //     if(a=='1' || s[i]=='1') v1[i]=1;
        //     // a=s[i];
        // }
        cout<<ans<<"\n";
    }   
}
// 1010
// 0011
// 10011001