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
        ll n,m,f=0,ans=0;
        cin>>n>>m;
        string a,b,cost;
        cin>>a>>cost>>b;
        vector<ll> v(26,100);
        vector<ll> c(n);
        for(ll i=0;i<n;i++)
        {
            c[i]=cost[i]-'0';
        }

        for(ll i=0;i<n;i++)
        {
            v[a[i]-'a']=min(v[a[i]-'a'],c[i]);
        }
        for(ll i=0;i<m;i++)
        {
            if(v[b[i]-'a']==100) f=1;
        }
        if(f)
        {
            cout<<"-1\n";
            continue;
        }
        for(ll i=0;i<m;i++)
        {
            ans+=v[b[i]-'a'];
        }
        cout<<ans<<"\n";
    }    
}