#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<pair<ll,ll>,pair<ll,ll>>> v(n);
        for(ll i=0;i<n;i++)
        {
            ll x,a,b;
            cin>>a>>b;
            // x=a*b;
            v[i]={{a*b,a},{b,i}};
        }
        vector<ll> ans(n);
        sort(v.begin(),v.end());
        // for(ll i=0;i<n;i++)
        //     cout<<v[i].ff.ff<<" "<<v[i].ff.ss<<" "<<v[i].ss.ff<<" "<<v[i].ss.ss<<"\n";
        //     cout<<"\n\n";
        ans[v[0].ss.ss]=-1;
        for(ll i=1;i<n;i++)
        {
            ll f=0;
            for(ll j=0;j<i;j++)
            {
                if((v[j].ff.ss<v[i].ff.ss && v[j].ss.ff<v[i].ss.ff) || (v[j].ff.ss<v[i].ss.ff && v[j].ss.ff<v[i].ff.ss))
                {
                    ans[v[i].ss.ss]=v[j].ss.ss;
                    f=1;
                    break;
                }
            }
            if(!f) ans[v[i].ss.ss]=-1;
        }
        for(ll i=0;i<n;i++)
        {
            if(ans[i]!=-1) cout<<ans[i]+1<<" ";
            else cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }

}