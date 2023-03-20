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
        ll n,c=0;
        cin>>n;
        string s;
        cin>>s;
        ll k;
        cin>>k;
        vector<char> v(k);
        vector<ll> p;
        for(ll i=0;i<k;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            if(find(all(v),s[i])!=v.end())
            {
                // while(find(all(v),s[i])!=v.end() && i<n) i++;
                p.pb(i);
            }
        }
        // cout<<1;
        ll ans=0;
        if(p.size()) ans=p[0];
        for(ll i=1;i<p.size();i++) ans=max(ans,p[i]-p[i-1]);
        cout<<ans;
        cout<<"\n";
    }
}   