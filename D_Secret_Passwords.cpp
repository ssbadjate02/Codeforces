#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<string> v;

vector<ll> vis(26),present(26);
vector<vector<ll>> adj(26);

void dfs(ll i)
{
    vis[i]=1;
    for(auto e:adj[i])
    {
        for(ll j=0;j<v[e].size();j++)
        {
            if(!vis[v[e][j]-'a']) dfs(v[e][j]-'a');
        }
    }
}

int main()
{
    FASTIO;
    ll n,ans=0;
    cin>>n;
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    for(ll i=0;i<n;i++)
    {
        vector<ll> cnt(26);
        for(ll j=0;j<v[i].size();j++)
        {
            present[v[i][j]-'a']=1;
            if(!cnt[v[i][j]-'a'])
            {
                cnt[v[i][j]-'a']=1;
                adj[v[i][j]-'a'].pb(i);
            }
        }
    } 
    for(ll i=0;i<26;i++)  
    {
        if(!vis[i] && present[i])
        {
            dfs(i);
            ans++;
        }
    }
    cout<<ans<<"\n";
}
// a - b
// b - a
// d - a  