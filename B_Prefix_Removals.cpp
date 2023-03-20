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
        ll j=0;
        string s;
        cin>>s;
        vector<ll> c(26);
        for(ll i=0;i<s.size();i++) c[s[i]-'a']++;
        while(c[s[j]-'a']>1 && j<s.size())
        {
            c[s[j]-'a']--;
            j++;
        }
        for(ll i=j;i<s.size();i++) cout<<s[i];
        cout<<"\n";
    }   
}