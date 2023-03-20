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
        ll a,b,c;
        cin>>a>>b>>c;
        ll n=abs(b-a)*2;
        if(a>n||b>n||c>n) cout<<"-1\n";
        else
        {
            if(c+n/2<=n) cout<<c+n/2;
            else cout<<c-n/2;
            cout<<"\n";
        }
    }   
}