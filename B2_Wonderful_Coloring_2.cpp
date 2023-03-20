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
        ll n,k,cnt=0;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<ll> c(n+1);
        for(ll i=0;i<n;i++)
        {
            if(c[v[i]]<k) c[v[i]]++;
        }
        for(ll i=0;i<=n;i++) cnt+=c[i];
        ll ans=cnt/k;
        vector<ll> x(n+1,1);
        c.resize(n+1,0);
        cout<<ans<<"\n";
        for(ll i=0;i<n;i++)
        {
            if(c[x[v[i]]]<=ans)
            {
                cout<<x[v[i]]<<" ";
                c[x[v[i]]];
                x[v[i]]++;
            
            }
            else cout<<"0 ";
        }
        cout<<"\n";

    }   
}