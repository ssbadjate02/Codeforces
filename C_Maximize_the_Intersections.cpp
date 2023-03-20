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
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>> v(k);
        vector<ll> f(2*n+1);
        for(ll i=0;i<k;i++)
        {
            ll a,b;
            cin>>a>>b;
            // if(a>b) swap(a,b);
            v[i]={a,b};
            f[a]=1;
            f[b]=1;
        }
        ll ans=(n-k)*(n-k-1)/2;
        for(ll i=0;i<k;i++)
        {
            for(ll j=i+1;j<k;j++)
            {
                ll x,y,a,b;
                x=1;
                y=(v[i].ss-v[i].ff+1)%(2*n);
                a=(v[j].ff-v[i].ff+1)%(2*n);
                b=(v[j].ss-v[i].ff+1)%(2*n);
                if(y<=0) y+=2*n;
                if(a<=0) a+=2*n;
                if(b<=0) b+=2*n;
                if(a>b) swap(a,b);
                if(x>y) swap(x,y);
                if(x<a && y<b && y>a) ans++;
            }   
        }
        for(ll i=0;i<k;i++)
        {
            ll x=0,y=0;
            for(ll j=v[i].ff;;j++)
            {
                if(j>2*n) j%=(2*n);
                if(!f[j]) x++;
                if(j==v[i].ss) break;
            }
            for(ll j=v[i].ss;;j++)
            {
                if(j>2*n) j%=(2*n);
                if(!f[j]) y++;
                if(j==v[i].ff) break;
            }
            ans+=min(x,y);
        }
        cout<<ans<<"\n";
    }   
}