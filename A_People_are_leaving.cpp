#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> parent,siz;
int maxx;
int findset(int v)
{
    if(v>=maxx) return maxx;
    if(parent[v]==v) return v;
    return parent[v]=findset(parent[v]);
}

void unionset(int u, int v)
{
    u=findset(u);
    v=findset(v);
    if(u==v) return;
    if(u<v)swap(u,v);
    parent[v]=u;
    siz[u]+=siz[v];
}

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    maxx=n;
    parent.resize(n+1);
    siz.resize(n+1);
    for(ll i=0;i<=n;i++) parent[i]=i,siz[i]=1; 
    for(ll i=0;i<m;i++)
    {
        char a;
        int x;
        cin>>a>>x;
        if(a=='-')
        {
            if(x<maxx) unionset(x+1,x);
            else
            {
                while(findset(x)==maxx) x--;
                maxx=x;
                // cout<<"maxx "<<maxx<<"\n";
            }
        }
        else
        {
            if(x>maxx) cout<<"-1\n";
            else cout<<findset(x)<<"\n";
        }
    }
}