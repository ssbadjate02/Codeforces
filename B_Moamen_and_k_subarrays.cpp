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
        ll n,k,c=1;
        cin>>n>>k;
        vector<ll> v(n),te;
        for(ll i=0;i<n;i++) cin>>v[i];
        te=v;
        sort(te.begin(),te.end());
        map<ll,ll> m;
        for(ll i=0;i<n-1;i++) m[te[i]]=te[i+1];
        if(n==1)
        {
            cout<<"Yes\n";  
            continue;
        }
        for(ll i=1;i<n;i++)
        {       
            if(v[i]!=m[v[i-1]]) c++;
        }
        if(c<=k) cout<<"Yes\n";
        else cout<<"No\n";
    }   
}