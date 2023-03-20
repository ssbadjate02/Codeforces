#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second
vector<int> siz,len;
vector<pair<int,int>> parent;
pair<int,int> findset(int v)
{
    if(parent[v].ff==v) return {v,0};
    auto x=findset(v);
    len[v]=len[v]+x.ss;
    return parent[v]={x.ff,len[v]};
}

void unionset(int u, int v)
{
    auto x=findset(u);
    auto y=findset(v);
    if(x.ff==y.ff) return;
    parent[y.ff].ff=x.ff;
    len[y.ff]=len[x.ff]+1+len[y.ff];
    siz[x.ff]+=siz[y.ff];
}

int main()
{
    FASTIO;
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    siz.resize(n+1);
    len.resize(n+1,0);
    for(int i=0;i<=n;i++) parent[i]={i,0},siz[i]=1; 
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int b,c;
            cin>>b>>c;
            unionset(c,b);
        }
        else
        {
            int b;
            cin>>b;
            cout<<len[b]<<"\n";
        }
    }
}