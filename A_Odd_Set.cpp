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
        ll n,o=0,e=0;
        cin>>n;
        for(ll i=0;i<2*n;i++)
        {
            ll a;
            cin>>a;
            if(a%2)o++;
            else e++;
        }
        if(o==e) cout<<"Yes\n";
        else cout<<"No\n";
    }   
}