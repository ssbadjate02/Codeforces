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

vector<ll>parent,siz;
int find_parent(int i)
{
    if(i==parent[i]) return i;
    return parent[i] =find_parent(parent[i]); 
}

void set_union(int a, int b)
{
    a=find_parent(a);
    b=find_parent(b);
    if(a==b) return;
    if(siz[a]<siz[b]) swap(a,b);
    siz[a]+=siz[b];
    parent[b] = a;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,tot=0,ans=0;
        cin>>n>>m;
        parent.clear();
        parent.resize(n+1);
        siz.clear();
        siz.resize(n+1);
        vector<vector<ll>> adj(m,vector<ll>(2));
        for(ll i=0;i<m;i++) cin>>adj[i][0]>>adj[i][1];
        for(ll i=1;i<=n;i++) cin>>siz[i],parent[i] = i,tot+=siz[i];
        for(ll i=0;i<m;i++) set_union(adj[i][0],adj[i][1]);
        ll clubs = 0;
        for(ll i=1;i<=n;i++) if(parent[i]==i) clubs++;
        ll a = tot/clubs;
        ll b = (tot-1+clubs)/clubs;
        // cout<<a<<" "<<b<<"\n";
        vector<ll> v;
        for(ll i=1;i<=n;i++)
        {
            if(parent[i]==i)
            {
                v.push_back(siz[i]);
            }
        }
        sort(all(v));
        ll x = tot%clubs;
        for(ll i=v.size()-1;i>=clubs-x;i--)
        {
            ans+=abs(b-v[i]);
        }
        for(ll i=0;i<clubs-x;i++) ans+=abs(v[i]-a);
        cout<<ans/2<<"\n";
    }   
}