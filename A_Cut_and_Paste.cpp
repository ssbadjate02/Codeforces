#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 

const int N = 1e9+7;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        string s;
        cin>>x>>s;
        ll n=s.size();
        for(ll i=0;i<x;i++)
        {
            if(s.size()<=x )
            {
                string temp(s.begin()+i+1,s.end());
                for(ll j=0;j<s[i]-'1';j++)
                {
                    s+=temp;
                }
            }
            n=(n%N+((s[i]-'1')*(n-i-1)%N)+N)%N;
        }
        ll ans=(n+N)%N;
        cout<<n<<"\n";
    }   
}