#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 1e9+7

int main()
{
    FASTIO;
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    pair<ll,ll> strt,end;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='A') strt={i,j};
            else if(v[i][j]=='B') end={i,j}; 
        }
    }
    vector<vector<ll>> mind(n,vector<ll>(m,N));
    vector<vector<pair<ll,ll>>> pt(n,vector<pair<ll,ll>>(m));
    set<pair<ll,pair<ll,ll>>> s;
    s.insert({0,strt});
    while(!s.empty())
    {
        pair<ll,pair<ll,ll>> a=*s.begin();
        s.erase(s.begin());
        ll dist=a.first;
        ll x=a.second.first;
        ll y=a.second.second;
        if(x<n-1 && v[x+1][y]!='#' && mind[x+1][y]>dist+1)
        {
            if(s.find({mind[x+1][y],{x+1,y}})!=s.end()) s.erase(s.find({mind[x+1][y],{x+1,y}}));
            s.insert({dist+1,{x+1,y}});
            mind[x+1][y]=dist+1;
            pt[x+1][y]={x,y};
        }
        if(x>0 && v[x-1][y]!='#' && mind[x-1][y]>dist+1)
        {
            if(s.find({mind[x-1][y],{x-1,y}})!=s.end()) s.erase(s.find({mind[x-1][y],{x-1,y}}));
            s.insert({dist+1,{x-1,y}});
            mind[x-1][y]=dist+1;
            pt[x-1][y]={x,y};
        }
        if(y>0 && v[x][y-1]!='#' && mind[x][y-1]>dist+1)
        {
            if(s.find({mind[x][y-1],{x,y-1}})!=s.end()) s.erase(s.find({mind[x][y-1],{x,y-1}}));
            s.insert({dist+1,{x,y-1}});
            mind[x][y-1]=dist+1;
            pt[x][y-1]={x,y};
        }
        if(y<m-1&& v[x][y+1]!='#' && mind[x][y+1]>dist+1)
        {
            if(s.find({mind[x][y+1],{x,y+1}})!=s.end()) s.erase(s.find({mind[x][y+1],{x,y+1}}));
            s.insert({dist+1,{x,y+1}});
            mind[x][y+1]=dist+1;
            pt[x][y+1]={x,y};
        }
    }
    if(mind[end.first][end.second]>1e9) cout<<"NO\n";
    else
    {
        cout<<"YES\n"<<mind[end.first][end.second]<<"\n";
        string path="";
        pair<ll,ll> x=end;
        while(x!=strt)
        {
            ll a=x.first;
            ll b=x.second;
            if(pt[a][b].first==a-1 && pt[a][b].second==b) path+="D",x={a-1,b};
            if(pt[a][b].first==a+1 && pt[a][b].second==b) path+="U", x={a+1,b};
            if(pt[a][b].first==a && pt[a][b].second==b-1) path+="R", x={a,b-1};
            if(pt[a][b].first==a && pt[a][b].second==b+1) path+="L", x={a,b+1};
            if(x==strt) break;
        }
        reverse(path.begin(), path.end());
        cout<<path;
    }
}