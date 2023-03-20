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
        ll s,n,m,f=0,x=-2;
        cin>>s>>n>>m;
        vector<ll> v(n),fr(m),z,g(n+1);
        vector<pair<ll,ll>> ans(m);
        map<ll,ll,greater<ll>> mp;
        for(ll i=0;i<s;i++)
        {
            ll a,b;
            cin>>a>>b;
            if(a!=b) v[a-1]=i+1,v[b-1]=i+1;
            else z.pb(a);
        }
        for(ll i=0;i<m;i++) cin>>fr[i];
        ll j=1;
        for(ll i=1;i<=n;i++) mp[i]=-1;
        for(ll i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                v[i]=-1;
                i++;
                while(v[i]==0 && i<n)
                {
                    v[i]=-1;
                    i++;
                }
                if(i!=n) v[i]=-1;
            }
        }
        for(ll i=0;i<z.size();i++) v[z[i]-1]=-1;
        // for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        // cout<<"\n";
        for(ll i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                j=i+1;
                while(v[i]==0 && i<n)
                {
                    i++;
                }
                // em.pb({i-j+1,i});
                // if(i-j+1>=fr[i])
                // {
                //     if(i>m[i]) m[i]=i;
                // }
                mp[i-j+1]=max(mp[i-j+1],i);
                g[i-j+1]=1;
            }
        }
        vector<ll> f1(n+1,0);
        if(g[n]==1)
        {
            for(ll i=0;i<m;i++)
            {
                cout<<n-fr[i]+1<<" "<<n;
            }
            continue;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(g[i])
            {
                f1[i]=max(f1[i+1],mp[i]);
            }
            else f1[i]=f1[i+1];
        }
        // for(ll i=0;i<=n;i++) cout<<f1[i]<<" ";
        // cout<<"\n";
        for(ll i=0;i<m;i++)
        {
            ans[i]={f1[fr[i]]-fr[i]+1,f1[fr[i]]};
            if(ans[i].first<=0) ans[i]={-1,-1};
        }
        for(ll i=0;i<m;i++) cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }   
}