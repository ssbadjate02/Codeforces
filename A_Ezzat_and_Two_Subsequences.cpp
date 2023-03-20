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
        ll n,sum=0,s=0;
        double ans=-1e15;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];
        sort(v.begin(),v.end(),greater<ll>());
        for(ll i=0;i<n-1;i++)
        {
            sum+=v[i];
            ans=max(ans,(double)sum/(double)(i+1)+(double)(s-sum)/(double)(n-i-1));
        }
        cout<<setprecision(20)<<ans<<"\n";
    }   
}