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
        ll n,k,z,s=0,ans=0,maxans=0;
        cin>>n>>k>>z;
        vector<ll> v(n),ps(n);
        for(ll i=0;i<n;i++) cin>>v[i],s+=v[i],ps[i]=s;
        for(ll i=1;i<=k;i++)
        {
            ans=0;
            ll x=k-i,y=z,l=i;
            while(y>0 && x>0)
            {
                ans+=v[i-1],y--,x--;
                if(x>0)
                {
                    ans+=v[i],x--;
                }
            }
            ans+=ps[i+x];
            maxans=max(ans,maxans);
        }
        cout<<maxans<<"\n";
    }   
}