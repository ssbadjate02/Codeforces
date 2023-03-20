#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<int>> parent(2),siz(2);
 
int findset(int v,int j)
{
    if(parent[j][v]==v) return v;
    return parent[j][v]=findset(parent[j][v],j);
}
 
 
void unionset(int u,int v,int j)
{
    u=findset(u,j);
    v=findset(v,j);
    if(u==v) return;
    if(siz[j][u]<siz[j][v]) swap(u,v);
    parent[j][v]=u;
    siz[j][u]+=siz[j][v];
 
}

int main()
{
    FASTIO;
    int n,m1,m2,ans=0;
    cin>>n>>m1>>m2;
    vector<pair<int,int>>out;
    parent[0].resize(n+1);
    parent[1].resize(n+1);
    siz[0].resize(n+1);
    siz[1].resize(n+1);
    for(int i=1;i<=n;i++)
    {
        parent[0][i]=i;
        parent[1][i]=i;
        siz[0][i]=1;
        siz[1][i]=1;
    }
    for(int i=0;i<m1;i++)
    {
        int a,b;
        cin>>a>>b;
        unionset(a,b,0);
    }
    for(int i=0;i<m2;i++)
    {
        int a,b;
        cin>>a>>b;
        unionset(a,b,1);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(findset(i,0)!=findset(j,0) && findset(i,1)!=findset(j,1)) ans++,unionset(i,j,0),unionset(i,j,1),out.pb({i,j});
        }
    }
    cout<<ans<<"\n";
    for(int i=0;i<out.size();i++) cout<<out[i].first<<" "<<out[i].second<<"\n";
}