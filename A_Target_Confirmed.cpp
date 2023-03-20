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
        ll ans=0;
        while(s.size()!=1)
        {
            ll n =1;
            for(ll i=0;i<s.size();i++)
            {
                n*=(s[i]-'0');
            }
            ans++;
            s=to_string(n);
        }
        cout<<ans<<"\n";
    }   
}