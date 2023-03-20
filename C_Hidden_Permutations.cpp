#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll ask(int i){
    cout<<"? "<<i<<endl;
    ll a;
    cin>>a;
    return a;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> vis(n+1),ans(n+1);
        for(ll i=1;i<=n;i++)
        {
            vector<ll> v;
            if(vis[i]) continue;
            while(1)
            {
                ll a;
                a=ask(i);
                if(vis[a]) break;
                else
                {
                    v.pb(a);
                    vis[a]=1;
                }
            }
            for(ll j=1;j<v.size();j++)
            {
                ans[v[j-1]]=v[j];
            }
            ans[v[(ll)v.size()-1]]=v[0];
        }
        cout<<"! ";
        for(ll i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }   
}