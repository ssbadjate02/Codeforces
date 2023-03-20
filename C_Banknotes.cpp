#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
//min=100a+10b+c a+b+c=13
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) 
        {
            ll a;
            cin>>a;
            v[i]=pow(10,a);
        }
        ll p=0,c=0,ans=0;
        k++;
        for(ll i=0;i<n;i++)
        {
            if(i==n-1||p+v[i]*(k-c)<v[i+1])
            {
                ans=p+v[i]*(k-c);
                break;
            }
            if(i==n-1) continue;
            p=v[i+1]-1;
            c+=v[i+1]/v[i]-1;
        }
        cout<<ans<<"\n";
    }
}