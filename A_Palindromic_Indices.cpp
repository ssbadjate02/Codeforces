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
        ll n,c=1;
        cin>>n;
        string s;
        cin>>s;
        if(n==1) 
        {
            cout<<1<<"\n";
        }
        if(n%2)
        {
            for(ll i=1;i<=n/2;i++)
            {
                if(s[i]==s[i-1]) c++;
                else c=1;
            }
                cout<<2*c-1;
        }
        else
        {
            for(ll i=1;i<n/2;i++)
            {
                if(s[i]==s[i-1]) c++;
                else c=1;
            }
                cout<<2*c;
        }
        cout<<"\n";
    }   
}