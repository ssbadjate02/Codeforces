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
        ll n,c1=0,c0=0;
        cin>>n;
        vector<ll>a(n),b1,b0;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(a[i]==1) b1.pb(x),c1++;
            else b0.pb(x),c0++;
        }
        sort(all(b0),greater<ll>());
        sort(all(b1),greater<ll>());
        vector<ll> t1,t2;
        ll x1=c1,x0=c0;
        while(x1 && x0)
        {
            t1.pb(1);
            t1.pb(0);
            x1--;
            x0--;
        }
        while(x1) t1.pb(1),x1--;
        while(x0) t1.pb(0),x0--;
        while(c1 && c0)
        {
            t2.pb(0);
            t2.pb(1);
            c1--;
            c0--;
        }
        while(c1) t2.pb(1),c1--;
        while(c0) t2.pb(0),c0--;
        
        ll i=0,j=0,ans1=0,ans2=0;
        for(ll k=0;k<t1.size();k++)
        {
            if(k==0 || t1[k-1]==t1[k])
            {
                if(t1[k]==0) ans1+=b0[i++];
                else ans1+=b1[j++];
            }
            else 
            {
                if(t1[k]==0) ans1+=2*b0[i++];
                else ans1+=2*b1[j++];
            }
        }
        i=0,j=0;
        cout<<"\n";
        for(ll k=0;k<t2.size();k++)
        {
            if(k==0 || t2[k-1]==t2[k])
            {
                if(t2[k]==0) ans2+=b0[i++];
                else ans1+=b1[j++];
            }
            else 
            {
                if(t2[k]==0) ans2+=2*b0[i++];
                else ans2+=2*b1[j++];
            }
        }
        cout<<ans1<<" "<<ans2<<"\n";
        cout<<max(ans1,ans2)<<"\n";
    }   
}