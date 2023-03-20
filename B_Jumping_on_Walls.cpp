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

int main()
{
    FASTIO;
    ll n,k;
    cin>>n>>k;
    vector<string> v(2);
    cin>>v[0]>>v[1];
    for(ll i=0;i<=k;i++) v[0]+='-',v[1]+='-';
    set<pair<ll,pair<ll,ll>>> s;
    vector<vector<ll>> dist(n+k+1,vector<ll>(2,1e9+7));
    s.insert({0,{0,0}});
    dist[0][0] = 0;
    while(!s.empty())
    {
        auto x = *s.begin();
        s.erase(s.begin());
        ll d = x.first;
        ll y = x.second.first;
        ll z = x.second.second;
        if(v[z][y+1]=='-' && dist[y+1][z]>d+1)
        {
            if(s.find({dist[y+1][z],{y+1,z}})!=s.end()) s.erase(s.find({dist[y+1][z],{y+1,z}}));
            s.insert({d+1,{y+1,z}});
            dist[y+1][z]=d+1;
        }
        if(y>0 && v[z][y-1]=='-' && y-1>d && dist[y-1][z]>d+1)
        {
            if(s.find({dist[y-1][z],{y-1,z}})!=s.end()) s.erase(s.find({dist[y-1][z],{y-1,z}}));
            s.insert({d+1,{y-1,z}});
            dist[y-1][z]=d+1;
        }
        if(y+k<n+k && v[!z][y+k]=='-' && dist[y+k][!z]>d+1)
        {
            if(s.find({dist[y+k][!z],{y+k,!z}})!=s.end()) s.erase(s.find({dist[y+k][!z],{y+k,!z}}));
            s.insert({d+1,{y+k,!z}});
            dist[y+k][!z] = d+1;
        }
    }
    // for(ll i=0;i<n+k+1;i++) cout<<dist[i][0]<<" ";
    ll f=0;
    for(ll i=n;i<=n+k;i++) if(dist[i][0]<1e9 || dist[i][1]<1e9) f=1;
    cout<<(f?"YES\n":"NO\n");
}