#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

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
        if (siz[a] == siz[b])
            siz[a]++;
    }
}

struct Edge {
    int u, v, w;
    bool operator<(Edge const& other) {
        return w < other.w;
    }
};


int main()
{
    FASTIO;
    int n,m;
    cin>>n>>m;
    vector<Edge> ve;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ve.pb({a,b,c});
    }

    int cost = 0;
    vector<int> f(n+1);
    vector<Edge> r;
    parent.resize(n+1);
    siz.resize(n+1);
    for (int i = 0; i < n; i++)
        make_set(i);

    sort(ve.begin(), ve.end());
    ll i=0;
    for (Edge e : ve) {
        if (find_set(e.u) != find_set(e.v)) {
            union_sets(e.u, e.v);
            f[i]=1;
        }
        i++;
    }
    for(ll j=0;j<m;j++)
    {
        if(!f[j]) cost+=max(0,ve[j].w);
    }
    cout<<cost;
}