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
        ll n,maxans=0;
        cin>>n;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<5;i++)
        {
            char x='a'+i;
            ll ans=0,z=0;
            vector<ll> y;
            for(ll j=0;j<n;j++)
            {
                ll c1=0,c2=0;
                for(ll k=0;k<v[j].size();k++)
                {
                    if(v[j][k]==x) c1++;
                    else c2++;
                }
                y.pb(c1-c2);
            }
            sort(y.begin(),y.end(),greater<ll>());
            for(ll j=0;j<y.size();j++)
            {
                z+=y[j];
                if(z<=0) break;
                ans++;
            }
            maxans=max(maxans,ans);
        }
        cout<<maxans<<"\n";
    }
}