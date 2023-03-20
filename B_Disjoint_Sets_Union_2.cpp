#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define N 2e5+7
#define ff first
#define ss second

vector<pair<int,pair<int,int>>> parent;
vector<int> siz;

int findset(int v)
{
    if(parent[v].ff==v) return v;
    return parent[v].ff=findset(parent[v].ff);
}


void unionset(int u,int v)
{
    u=findset(u);
    v=findset(v);
    if(u==v) return;
    if(siz[u]<siz[v]) swap(u,v);
    parent[v].ff=u;
    parent[v].ss={min(parent[v].ss.ff,parent[u].ss.ff),max(parent[v].ss.ss,parent[u].ss.ss)};
    parent[u].ss={min(parent[v].ss.ff,parent[u].ss.ff),max(parent[v].ss.ss,parent[u].ss.ss)};
    siz[u]+=siz[v];

}

int main()
{
    FASTIO;
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    siz.resize(n+1);
    for(int i=0;i<=n;i++) parent[i]={i,{i,i}},siz[i]=1;
    // cout<<n<<" "<<m<<"\n";
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        // cout<<s<<" "<<x<<" "<<y<<"\n";
        if(s=="union")
        {
            // cout<<"1\n";
            int x,y;
            cin>>x>>y;
            unionset(x,y);
        }
        else
        {
            int x;
            cin>>x;
            x=findset(x);
            cout<<parent[x].ss.ff<<" "<<parent[x].ss.ss<<" "<<siz[x]<<"\n";
            // cout<<"2\n";
        }
    }

}