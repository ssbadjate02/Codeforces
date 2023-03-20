#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7a

vector<int> parent,siz;

int findset(int v)
{
    if(parent[v]==v) return v;
    return parent[v]=findset(parent[v]);
}


void unionset(int u,int v)
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
    int n,m,k;
    cin>>n>>m>>k;
    parent.resize(n+1);
    siz.resize(n+1);
    for(int i=0;i<=n;i++) parent[i]=i,siz[i]=1;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
    }
    vector<string> s(k),ans;
    vector<int> a(k),b(k);
    for(int i=0;i<k;i++)
    {
        cin>>s[i]>>a[i]>>b[i];
    }
    for(int i=k-1;i>=0;i--)
    {
        if(s[i]=="cut")
        {
            unionset(a[i],b[i]);
        }
        else
        {
            if(findset(a[i])==findset(b[i])) ans.pb("YES");
            else ans.pb("NO");
        }
    }
    for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<"\n";
}
