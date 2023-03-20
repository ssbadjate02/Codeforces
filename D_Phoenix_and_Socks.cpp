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
        ll n,l,r,ans=0,sl=0,sr=0;
        cin>>n>>l>>r;
        vector<ll> cl(n+1),cr(n+1);
        for(ll i=0;i<l;i++)
        {
            ll a;
            cin>>a;
            cl[a]++;
        }
        for(ll i=0;i<r;i++)
        {
            ll a;
            cin>>a;
            cr[a]++;
        }
        if(l<r) swap(cl,cr);
        for(ll i=1;i<=n;i++)
        {
            if(cl[i]>=cr[i]) cl[i]-=cr[i],cr[i]=0;
            else cr[i]-=cl[i],cl[i]=0;
        }
                l=0,r=0;
        for(ll i=1;i<=n;i++) l+=cl[i],r+=cr[i];
        ll m=0;
        for(ll i=1;i<=n;i++)
        {
            m+=cl[i]/2;
        }
        ll x=abs(l-r)/2;
        ans+=x;
        int minn=min(x,m);
        l-=minn;
        r-=minn;
        ans+=(l+r)/2;
    
        // for(ll i=1;i<=n;i++) sl+=(cl[i]);
        // for(ll i=1;i<=n;i++) sr+=(cr[i]);
        // if(sl<sr) swap(sl,sr);
        // ans+=sr;
        // sl-=sr;
        // ans+=sl;
        cout<<ans<<"\n";

    }      
}