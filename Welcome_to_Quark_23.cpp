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
        ll n,x=0,ans=1e9,ans1=0;
        string s;
        cin>>n>>s;
        for(char a='a';a<='z';a++)
        {   
            ans1=0;
            for(ll i=0;i<n;i++) ans1+=abs(s[i]-a);
            ans = min(ans,ans1);
        }
        cout<<ans<<"\n";
    }   
}