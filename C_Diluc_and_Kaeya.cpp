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
        ll n;
        string s;
        cin>>n>>s;
        vector<ll> d(n),k(n);
        map<pair<ll,ll>,ll> ans;
        for(ll i=0;i<n;i++)
        {
            if(i!=0) d[i]=d[i-1],k[i]=k[i-1];

            ll a,b;
            if(s[i]=='K') k[i]++;
            else d[i]++;
            if(k[i]==0) a=1,b=0,ans[{1,0}]++;
            else if(d[i]==0) a=0,b=1,ans[{0,1}]++;
            else
            {
                ll x=__gcd(d[i],k[i]);
                a=d[i]/x,b=k[i]/x;
                ans[{a,b}]++;
            }
            cout<<ans[{a,b}]<<" ";
        }
        cout<<"\n";
    }   
}