#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

vector<int> parent,siz;
ll res;
ll find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

ll c2(ll c)
{
    return (c)*(c-1)/2;
}

void make_set(int v) {
    parent[v] = v;
    siz[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (siz[a] < siz[b])
            swap(a, b);
        parent[b] = a;
        res-=c2(siz[a]);
        res-=c2(siz[b]);
        siz[a] += siz[b];
        res+=c2(siz[a]);
    }
}

int main()
{
    FASTIO;
    ll n,q;
    cin>>n>>q;
    parent.resize(n+1);
    siz.resize(n+1,-1);
    for(ll i=1;i<n+1;i++)
    {
       make_set(i);
    }  
    vector<pair<ll,pair<ll,ll>>> v;
    for(ll i=0;i<n-1;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v.pb({c,{a,b}});
    }
    sort(all(v));
    vector<pair<ll,ll>> qe(q);
    for(ll i=0;i<q;i++)
    {
        cin>>qe[i].ff;
        qe[i].ss=i;
    }
    sort(all(qe));
    res=0;
    ll j=0;
    vector<ll> ans(q);
    for(ll i=0;i<q;i++)
    {
        while(j<n-1 && v[j].ff<=qe[i].ff) union_sets(v[j].ss.ff,v[j].ss.ss),j++;
        ans[qe[i].ss] = res;
    }
    for(auto e:ans) cout<<e<<" ";
    cout<<"\n";
}