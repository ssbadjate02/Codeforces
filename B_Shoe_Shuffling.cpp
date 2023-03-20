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
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        } 
        ll minc=1e9+7;
        for(auto e:m) minc=min(minc,e.second);
        if(minc==1)
        {
            cout<<"-1\n";
            continue;
        }
        vector<ll> ans(n);
        for(ll i=0;i<n;i++) ans[i]=i;
        for(ll i=1;i<n;i++)
        {
            if(v[i]==v[i-1]) swap(ans[i],ans[i-1]);
        }
        for(ll i=0;i<n;i++) cout<<ans[i]+1<<" ";
        cout<<"\n";
    }   
}