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
        ll n,f=0;
        cin>>n;
        vector<ll> v(n),r,b;
        for(ll i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;
        for(ll i=0;i<n;i++) 
        {
            if(s[i]=='R') r.pb(v[i]);
            else b.pb(v[i]);
        }
        sort(b.begin(),b.end());
        sort(r.begin(),r.end(),greater<ll>());
        ll rs=r.size();
        ll bs=b.size();
        if((rs && r[0]>n) || (bs && b[0]<1)) f=1;
        for(ll i=0;i<rs;i++)
        {
            if(r[i]>n) r[i]=n;
            if(i>n-r[i])
            {
                f=1;
                // cout<<"X";
                break;
            }
        }
        for(ll i=0;i<bs;i++)
        {
            if(b[i]<1) b[i]=1;
            if(i>=b[i])
            {
                f=1;
                // cout<<"Y";
                break;
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}