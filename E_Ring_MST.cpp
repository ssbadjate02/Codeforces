#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<int> parent, rank;

void make_set(int v) {
    parent[v] = v;
    rank[v] = 0;
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
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}


int main()
{
    FASTIO;
    int n,m;
    cin>>n>>m;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        a%=n;
        if(mp.find(a)!=mp.end()) mp[a]=min(mp[a],b);
        else mp[a]=b;
    }
    int cost = 0;
    parent.resize(n);
    rank.resize(n);
    for (int i = 0; i < n; i++)
        make_set(i);

    for (Edge e : edges) {
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.weight;
            result.push_back(e);
            union_sets(e.u, e.v);
        }
    }

}