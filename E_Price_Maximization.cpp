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
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++) cin>>v[i].ss;
        for(ll i=0;i<n;i++)
        {   
            bitset<32> b(v[i].ss);
            for(ll j=0;j<32;j++) 
            {
                if(b[j]==1) 
                {
                    v[i].ff=j;
                    break;
                }
            }
        }
        // for(ll i=0;i<n;i++) cout<<v[i].ff<<" "<<v[i].ss<<"\n";
        ll ans=0;
        sort(all(v));
        ll i=0,j=n-1;
        while(v[i].ff==1 && i<=j) i++,j--,ans++;
        if(i<j)
        {
            for(ll k=i;k<=j;k++,j--) ans+=v[i].ss;
        }
        cout<<ans<<"\n";
    }   
}