#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> parent,siz;
int findset(int v)
{
    if(parent[v]==v) return v;
    return parent[v]=findset(parent[v]);
}

void unionset(int u, int v)
{
    u=findset(u);
    v=findset(v);
    if(u==v) return;
    if(siz[u]<siz[v]) swap(u,v);
    parent[v]=u;
    siz[u]+=siz[v];
}

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    parent.resize(n+1);
    siz.resize(n+1);
    set<int> s;
    for(ll i=0;i<=n;i++) parent[i]=i,siz[i]=1,s.insert(i); 
    for(ll i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1) unionset(b,c);
        else if(a==2)
        {
            auto it=s.lower_bound(b);
            while(it!=s.end() && *it<c)
            {
                unionset(*it+1,*it);
                auto temp=it;
                temp++;
                s.erase(it);
                it=temp;
            }
        }
        else
        {
            if(findset(b)==findset(c)) cout<<"YES\n";
            else cout<<"NO\n";
        }
           
    }
}