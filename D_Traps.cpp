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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<pair<ll,ll>> d;
        for(ll i=0;i<n;i++)
        {
            d.pb({v[i]-(n-i-1),i});
        } 
        sort(all(d),greater<pair<ll,ll>>());
        ll j=0;
        map<ll,ll> m;
        for(ll i=0;i<k;i++)
        {
            // if(d[i].ff<=0) break;
            m[d[i].ss]=1;
        }   
        for(ll i=n-1;i>=0;i--)
        {
            if(m.size()>=k) break;
            m[i]=1;
        }
        ll ans=0,add=0,c = m.size()-1;
        // for(ll i=0;i<n;i++) cout<<d[i].ff<<" "<<d[i].ss<<"\n";
        for(ll i=0;i<n;i++) 
        {
            if(m.find(i)==m.end()) 
            {
                ans+=v[i]+add;
                add=0;
            }
            else 
            {
                add+=(n-c-i-1);
                c--; 
            }
            
        }
       
        cout<<ans<<"\n";
    }   
}