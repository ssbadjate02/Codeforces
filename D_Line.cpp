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
        string s;
        cin>>n>>s;
        ll l=0,r=0;
        vector<ll> v,p;
        ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='R') ans+=n-i-1;
            else ans+=i;
        }
        for(ll i=0;i<n/2;i++)
        {
            if(s[i]=='L') v.push_back(n-2*i-1);
        }
        for(ll i=n/2;i<n;i++)
        {
            if(s[i]=='R') v.push_back(2*i - n + 1);
        }
        sort(all(v),greater<ll>());
        // cout<<1;
        p.resize(v.size());
        if(v.size()) p[0] = v[0];
        for(ll i=1;i<v.size();i++)
        {
            p[i] = p[i-1]+v[i];
        }
        if(!p.size()) p.push_back(0);
        for(ll i=0;i<p.size();i++) cout<<ans+p[i]<<" ";
        for(ll i=p.size();i<n;i++) cout<<ans+*p.rbegin()<<" " ;
        cout<<"\n";
    }
}