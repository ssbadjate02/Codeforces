#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    vector<pair<ll,ll>> mo;
    ll ax,ay;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='M') mo.pb({i,j});
            if(v[i][j]=='A') ax=i,ay=j;
        }
    }
    set<pair<ll,pair<ll,ll>>> s;
    vector<vector<ll>> mind(n,vector<ll>(m,N));
    for(ll i=0;i<mo.size();i++)
    {
        ll a=mo[i].ff,b=mo[i].ss;
        mind[a][b]=0;
        s.insert({0,{a,b}});
    }
    while(!s.empty())
    {
        auto z=*s.begin();
        s.erase(s.begin());
        ll dist=z.ff,x=z.ss.ff,y=z.ss.ss;
        if(x>0 && v[x-1][y]!='#' && mind[x-1][y]>dist+1)
        {
            if(s.find({mind[x-1][y],{x-1,y}})!=s.end()) s.erase(s.find({mind[x-1][y],{x-1,y}}));
            s.insert({dist+1,{x-1,y}});
            mind[x-1][y]=dist+1;
        }
        if(x<n-1 && v[x+1][y]!='#' && mind[x+1][y]>dist+1)
        {
            if(s.find({mind[x+1][y],{x+1,y}})!=s.end()) s.erase(s.find({mind[x+1][y],{x+1,y}}));
            s.insert({dist+1,{x+1,y}});
            mind[x+1][y]=dist+1;
        }
        if(y>0 && v[x][y-1]!='#' && mind[x][y-1]>dist+1)
        {
            if(s.find({mind[x][y-1],{x,y-1}})!=s.end()) s.erase(s.find({mind[x][y-1],{x,y-1}}));
            s.insert({dist+1,{x,y-1}});
            mind[x][y-1]=dist+1;
        }
        if(y<m-1 && v[x][y+1]!='#' && mind[x][y+1]>dist+1)
        {
            if(s.find({mind[x][y+1],{x,y+1}})!=s.end()) s.erase(s.find({mind[x][y+1],{x,y+1}}));
            s.insert({dist+1,{x,y+1}});
            mind[x][y+1]=dist+1;
        }
    }
    queue<pair<ll,pair<ll,ll>>> q;
    q.push({0,{ax,ay}});
    // vector<ll> p(n+1);
    vector<vector<char>> p(n+1,vector<char>(m+1));
    vector<vector<ll>> vis(n+1,vector<ll>(m+1));
    ll ex=-1,ey=-1;
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<m;j++) cout<<mind[i][j]<<" ";
    //     cout<<"\n";
    // }
    while(!q.empty())
    {
        auto z=q.front();
        q.pop();
        ll dist=z.ff,x=z.ss.ff,y=z.ss.ss;
        vis[x][y]=1;
        if(x==n-1 || x==0 || y==m-1 || y==0)
        {
            ex=x;
            ey=y;
            break;
        }
        if(x>0 && v[x-1][y]=='.' && vis[x-1][y]==0 && mind[x-1][y]>dist+1)
        {
            p[x-1][y]='U';
            q.push({dist+1,{x-1,y}});
        }
        if(x<n-1 && v[x+1][y]=='.' && vis[x+1][y]==0 && mind[x+1][y]>dist+1)
        {
            p[x+1][y]='D';
            q.push({dist+1,{x+1,y}});
        }
        if(y>0 && v[x][y-1]=='.' && vis[x][y-1]==0 && mind[x][y-1]>dist+1)
        {
            p[x][y-1]='L';
            q.push({dist+1,{x,y-1}});
        }
        if(y<m-1 && v[x][y+1]=='.' && vis[x][y+1]==0 && mind[x][y+1]>dist+1)
        {
            p[x][y+1]='R';
            q.push({dist+1,{x,y+1}});   
        }
    }
    if(ex==-1 || ey==-1) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        string path="";
        pair<ll,ll> x = {ex,ey};
        pair<ll,ll> strt={ax,ay};
        while(x!=strt)
        {
            ll u=x.ff,v=x.ss;
            if(p[u][v]=='U')
            {
                path+="U";
                x={u+1,v};
            }
            else if(p[u][v]=='D')
            {
                path+="D";
                x={u-1,v};
            }
            else if(p[u][v]=='R')
            {
                path+="R";
                x={u,v-1};
            }
            else
            {
                path+="L";
                x={u,v+1};
            }
            if(x==strt) break;
        }
        reverse(path.begin(),path.end());
        cout<<path.size()<<"\n"<<path<<"\n";
    }
}   