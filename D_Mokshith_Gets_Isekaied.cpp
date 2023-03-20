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
    ll n,f=0,g=0;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        v[i]=(s[i]=='W');
    }
    vector<ll> ans;
    for(ll i=0;i<n-1;i++)
    {
        if(v[i]==0)
        {
            v[i]=1;
            v[i+1]=!v[i+1];
            ans.pb(i);
        }
    }
    if(v[n-1]==0) f=1;
    if(!f)
    {
        cout<<ans.size()<<"\n";
        for(ll i=0;i<ans.size();i++) cout<<ans[i]+1<<" ";
        return 0;
    }
    ans.clear();
    for(ll i=0;i<n;i++)
    {
        v[i]=(s[i]=='W');
    }
    for(ll i=0;i<n-1;i++)
    {
        if(v[i]==1)
        {
            v[i]=0;
            v[i+1]=!v[i+1];
            ans.pb(i);
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            g=1;
        }
    }
    if(!g)
    {
        cout<<ans.size()<<"\n";
        for(ll i=0;i<ans.size();i++) cout<<ans[i]+1<<" ";
        return 0;
    }
    cout<<"-1\n";
}