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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        ll n,ans=0;
        cin>>n;
        vector<ll> a(n),b(n),posa(n+1),posb(n+10);
        for(ll i=0;i<n;i++) cin>>a[i],posa[a[i]] = i;
        for(ll i=0;i<n;i++) cin>>b[i],posb[b[i]] = i;
        set<ll> s;
        // if mex=i then
        for(ll i=1;i<=n;i++)
        {   
            ll l = min(posa[i],posb[i]);
            ll r = max(posa[i],posb[i]);
            if(l>0)
            {
                if(s.empty()) ans+=(l)*(l+1)/2;
                else 
                {
                    if((*s.begin()+1)>0 && (l-*s.rbegin())>0 ) ans+=(*s.begin()+1)*(l-*s.rbegin());
                }
            }
            if(l<r)
            {
                if(s.empty()) ans+=(r-l-1)*(r-l)/2;
                else 
                {
                    if((*s.begin() - l)>0 && (r-*s.rbegin())>0) ans+=(*s.begin() - l)*(r-*s.rbegin());
                }
            } 
            if(r<n-1)
            {
                if(s.empty()) ans+=(n-r-1)*(n-r)/2;
                else 
                {
                    if((*s.begin()-r)>0 && (n-*s.rbegin())>0) ans+= (*s.begin()-r)*(n-*s.rbegin());
                }
            }
            s.insert(l);
            s.insert(r);
            // ans+=(*s.begin()+1)*(n-*s.rbegin());
        }
        cout<<ans+1<<"\n";
    // }   
}