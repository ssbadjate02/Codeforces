#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};
vector<int> parent, siz;

void make_set(int v) {
    parent[v] = v;
    siz[v] = 0;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}
int n,m;
vector<Edge> edges;

int main()
{
    FASTIO;
    parent.resize(n+1);
    siz.resize(n+1);
    cin>>n>>m;
    // edges.resize(m);
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Edge x = {a,b,c};
        edges.pb(x);
    }   
    for (int i = 1; i <=n; i++) make_set(i);
    sort(edges.begin(), edges.end());
    int c=0;
    int maxx=-1,ans=1e9;
    for (Edge e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            union_sets(e.u, e.v);
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(parent[i]==i) c++;//cout<<i<<" "<<parent[i]<<"\n";
    }
    if(c>=2)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        parent.clear();
        siz.clear();
        parent.resize(n+1);
        siz.resize(n+1);
        maxx=-1;
        c=0;
        for (int j = 1; j <=n; j++) make_set(j);
        for (int j=i;j<m;j++) 
        {
            Edge e = edges[j];
            if (find_set(e.u) != find_set(e.v)) 
            {
                union_sets(e.u, e.v);
                maxx=max(maxx,e.weight);
                c++;
            }
        }
        if(c==n-1) ans=min(ans,maxx-edges[i].weight);
    }
    cout<<"YES\n";
    cout<<ans;
}