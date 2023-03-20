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

vector<ll> vis,c;
ll f;
vector<vector<ll>> v;
map<ll,vector<ll>> m;
void dfs(int i)
{
    vis[i] = 1;
    for(auto e:m[v[i][0]])
    {
        if(e==i) continue;
        if(c[e]==c[i]) 
        {
            // cout<<e<<" "<<i<<"\n";
            f=1;
            return; 
        }
        if(!vis[e])
        {
            
            c[e] = !c[i];
            dfs(e);
        }
    }
    for(auto e:m[v[i][1]])
    {
        if(e==i) continue;
        if(c[e]==c[i]) 
        {
            // cout<<e<<" "<<i<<"\n";
            f=1;
            return; 
        }
        if(!vis[e])
        {
            
            c[e] = !c[i];
            dfs(e);
        }
    }
}
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        f=0;
        cin>>n;
        m.clear();
        v.clear();
        v.resize(n,vector<ll>(2));
        for(ll i=0;i<n;i++)
        {
            cin>>v[i][0]>>v[i][1];   
            if(v[i][0]==v[i][1])
            {
                f=1;
            }
            m[v[i][0]].push_back(i);
            m[v[i][1]].push_back(i);
        }
        // for(auto e:m[1]) cout<<e<<" ";
        vis.clear();
        vis.resize(n);
        c.clear();
        c.resize(n,-1);
        for(ll i=0;i<n;i++)
        {
            if(!vis[i])
            {
                c[i] = 0;
                dfs(i);
            }
        }
        cout<<(!f?"YES\n":"NO\n");
    }   
}