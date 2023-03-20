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
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO\n";
            continue;
        }
        map<char,ll> m;
        for(int i=0;i<n;i++) m[s[i]]++;
        string a = "Timur";
        ll f=0;
        for(ll i=0;i<5;i++) if(m[a[i]]!=1) f=1;
        cout<<(f?"NO\n":"YES\n");
    }   
}