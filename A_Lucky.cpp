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
        ll a=0,b=0;
        for(ll i=0;i<6;i++)
        {
            if(i<3) a+=s[i]-'0';
            b+=s[i]-'0';
        }
        if(b%2==0 && b/2==a) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}