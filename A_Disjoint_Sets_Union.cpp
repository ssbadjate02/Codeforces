#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define N 2e5+7

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
    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    siz.resize(n+1);
    for(int i=0;i<=n;i++) parent[i]=i,siz[i]=1;
    // cout<<n<<" "<<m<<"\n";
    for(int i=0;i<m;i++)
    {
        string s;
        int x,y;
        cin>>s>>x>>y;
        // cout<<s<<" "<<x<<" "<<y<<"\n";
        if(s=="union")
        {
            // cout<<"1\n";
            unionset(x,y);
        }
        else
        {
            if(findset(x)==findset(y)) cout<<"YES\n";
            else cout<<"NO\n";
            // cout<<"2\n";
        }
    }

}