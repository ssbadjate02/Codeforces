#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

struct edge
{
    ll cost;
    ll u;
    ll v;
};

bool compareEdge(edge b1, edge b2)
{
    if (b1.cost < b2.cost)
    {
        return true;
    }
    return false;
}

int main()
{
    // freopen("p6_1.txt", "r", stdin);
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n));
    vector<ll> c(n),parent(n);
    for (ll i = 0; i <= n; i++)
        parent[i] = i;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
            cin >> v[i][j];
    }
    for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
                cout<<v[i][j]<<" ";
            cout<<"\n";
        }
    vector<edge> edges;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (v[i][j] > 0)
                edges.push_back({v[i][j], i, j});
        }
    }
    sort(edges.begin(), edges.end(),compareEdge);
    ll cost=0;
    for(edge e:edges)
    {
        cout<<e.cost<<" "<<e.u<<" "<<e.v<<"\n";
    }
    for (edge e : edges)
    {
        if (parent[e.u] != parent[e.v])
        {
            cost += e.cost;
            cout<<e.u<<" "<<e.v<<"\n";
            int old_id = parent[e.u], new_id = parent[e.v];
            for (int i = 0; i < n; i++)
            {
                if (parent[i] == old_id)
                    parent[i] = new_id;
            }
        }
    }
    cout<<cost<<"\n";
}

