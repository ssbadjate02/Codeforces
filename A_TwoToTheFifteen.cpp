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
        for(ll i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ll p=i,q=n/i;
                if(p<=q && ((double)p/(double)q)>=0.5000000)
                {
                    f=1;
                    break;
                }       
            }
        }
        if(f) cout<<"1\n";
        else cout<<"0\n";
    }
}