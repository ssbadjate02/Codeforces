#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> v;
void pow(ll a,ll n)
{
    for(ll i=1;i<=n;i*=a)
        v.pb(i);    
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,f=0;
        cin>>n>>a>>b;
        v.clear();
        if(a!=1) pow(a,n);
        else v.pb(1);
        for(ll i=0;i<v.size();i++)
        {
            // cout<<v[i]<<" ";
            if((n-v[i])%b==0)
            {
                f=1;
                break;
            }
        }
        // cout<<"\n";
        if(f) cout<<"Yes\n";
        else cout<<"No\n";
    }   
}