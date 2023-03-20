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
        string s;
        cin>>s;
        ll n=s.size(),a=0,b=0,f=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='A') a++;
            else b++;
            if(b>a) f=1;
        }
        if(f || s[n-1]!='B') cout<<"NO\n";
        else cout<<"YES\n";
    }   
}