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
        sort(all(v));
        vector<ll> p;
        ll c=1;
        for(ll i=1;i<n;i++)
        {
            if(v[i]==v[i-1]) c++;
            else
            {
                if(c>=k)p.pb(v[i-1]);
                c=1;
            }
        }
        if(c>=k)p.pb(v[n-1]);
        if(p.empty())
        {
            cout<<"-1\n";
            continue;
        }
        ll l=p[0],r=p[0],ansl=p[0],ansr=p[0];
        c=1;
        ll maxx=1 ;
        for(ll i=1;i<p.size();i++)
        {
            // cout<<p[i]<<" ";
            if(p[i]==p[i-1]+1) c++,r++;
            else 
            {
                if(c>maxx)
                {
                    ansl=l;
                    ansr=r;
                    maxx=c;
                }
                c=1;
                l=p[i];
                r=p[i];
            }
        }
        if(c>maxx)
        {
            ansl=l;
            ansr=r;
            maxx=c;
        }
        // cout<<l<<" "<<r<<"\n";
        cout<<ansl<<" "<<ansr<<"\n";
    }   
}