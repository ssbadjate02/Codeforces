#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll s,sum=0;
        cin>>s;
        ll x=sqrt(s);
        if(x*x==s) cout<<x<<"\n";
        else cout<<x+1<<"\n";
    }
}