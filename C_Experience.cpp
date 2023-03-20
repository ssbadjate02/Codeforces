#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define N 2e5+7
#define ff first
#define ss second

vector<int> parent;
vector<int> siz,po,a;

int findset(int v)
{
    if(parent[v]==v) return v;
    return findset(parent[v]);
}


void unionset(int u,int v)
{
    u=findset(u);
    v=findset(v);
    if(u==v) return;
    if(siz[u]<siz[v]) swap(u,v);
    parent[v]=u;
    // po[u]+=po[v];
    siz[u]+=siz[v];
    a[v]+=po[u];
}
int findpoints(int x)
{
    if(parent[x]!=x) return max(0,po[x]+findpoints(parent[x])-a[x]);
    else return max(0,po[x]-a[x]);
}
int main()
{
    FASTIO;
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    siz.resize(n+1);
    po.resize(n+1);
    a.resize(n+1);
    for(int i=0;i<=n;i++) parent[i]=i,siz[i]=1;
    // cout<<n<<" "<<m<<"\n";
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        if(s=="join")
        {
            int x,y;
            cin>>x>>y;
            unionset(x,y);
        }
        else if(s=="add")
        {
            ll x,e;
            cin>>x>>e;
            x=findset(x);
            po[x]+=e;
        }
        else
        {
            ll x;
            cin>>x;
            // x=findset(x);
            if(parent[x]!=x) cout<<findpoints(x)<<"\n";
            else cout<<po[x]<<"\n";
        }
    }

}