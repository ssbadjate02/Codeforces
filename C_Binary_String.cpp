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
        string s;
        cin>>s;
        ll n =s.size();
        vector<ll>p1(n+1),s1(n+1),c(n+1),p0(n+1);
        ll c0=0;
        for(ll i=0;i<n;i++)
        {
            p1[i+1]=p1[i]+(s[i]=='1');
            p0[i+1]=p0[i]+(s[i]=='0');
            c[c0]=i;
            c0++;
        }
        for(ll i=n;i>0;i--)
        {
            s1[i-1]=s1[i]+(s[i]=='1');
        }
        ll l=0,r=c0;
        for(ll i=0;i<=n;i++) cout<<p1[i]<<" ";
        cout<<"\n";
        for(ll i=0;i<=n;i++) cout<<s1[i]<<" ";
        cout<<"\n";
        for(ll i=0;i<=n;i++) cout<<p0[i]<<" ";
        cout<<"\n";
        while(l+1<r)
        {
            ll m =(l+r)/2,f=0,x=0;
            for(ll i=0;i<n;i++)
            {
                if(p1[i]+s1[c[m+p0[i]]]<=m)
                {
                    f=1;
                    // cout<<i<<" "<<m<<"\n";
                    break;
                }
            }
            if(f) r=m;
            else l =m;
            cout<<l<<" "<<r<<"\n";
        }
        ll f=0;
        // for(ll i=0;i<n;i++)
        // {
        //     if(p1[i]+s1[c[r+p0[i]]]<=r)
        //     {
        //         f=1;
        //         cout<<i<<" "<<r<<"\n";
        //         break;
        //     }
        // }
        if(!f)cout<<l<<"\n";
        else cout<<r<<"\n";
    }   
}