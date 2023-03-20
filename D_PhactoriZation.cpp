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
        ll n,f=0;
        cin>>n;
        if(n==1)
        {
            cout<<"Neither\n";
            continue;
        }
        if(n<=3)
        {
            cout<<"Prime\n";
            continue;
        }
        for(ll i=3; i*i<=n;i+=2)
        {
            if (n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f || n%2==0) cout<<"Composite\n";
        else cout<<"Prime\n";
    }   
}