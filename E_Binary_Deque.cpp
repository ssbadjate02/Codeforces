#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,s=0;
        cin>>n>>m;
        vector<ll> v(n),p(n+1);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            s+=v[i];
            mp[s]=i;
            p[i+1]=s;
        }
        if(p[n]<m)
        {
            cout<<"-1\n";
            continue;
        }
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            if(mp.find(m+p[i-1])==mp.end()) continue;
            ll j = mp[m+p[i-1]];
            // cout<<i<<" "<<j<<"\n";
            ans=max(ans,j-i+2);
        }
        cout<<n-ans<<"\n";
    }   
}