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
    // dp.resize(n, vector<vector<ll>>(m, vector<ll>(4,1e15)));
    for(ll i=0;i<n;i++) cin>>v[i];
    queue<pair<pair<ll,ll>,set<pair<ll,ll>>>> q;
    vector<vector<ll>> mind(n,vector<ll>(m,1e15));
    set<pair<ll,ll>> s;
    q.push({{0,0},s});
    mind[0][0]=0;
    while(!q.empty())
    {
        auto z=q.front();
        q.pop();
        auto a=z.ff;
        ll i=a.ff,j=a.ss;
        set<pair<ll,ll>> t=z.ss;
        if(i>0 && v[i-1][j]=='#' && t.find({i-1,j})==t.end() && mind[i-1][j]>mind[i][j]+1)
        {
            set<pair<ll,ll>> t1=t,t2=t,t3=t,t4=t;
            t1.insert({i-1,j-1}),t1.insert({i-2,j-1}),t1.insert({i-1,j}),t1.insert({i-2,j});
            t2.insert({i-1,j}),t2.insert({i-2,j}),t2.insert({i-1,j+1}),t2.insert({i-2,j+1});
            t3.insert({i-1,j}),t3.insert({i-1,j-1}),t3.insert({i,j-1}),t3.insert({i,j});
            t4.insert({i,j}),t4.insert({i-1,j}),t4.insert({i-1,j+1}),t4.insert({i,j+1});
            mind[i-1][j]=mind[i][j]+1;
            q.push({{i-1,j},t1});
            q.push({{i-1,j},t2});
            q.push({{i-1,j},t3});
            q.push({{i-1,j},t4});
        }
        if(i<n-1 && v[i+1][j]=='#' && t.find({i+1,j})==t.end() && mind[i+1][j]>mind[i][j]+1)
        {
            set<pair<ll,ll>> t1=t,t2=t,t3=t,t4=t;
            t1.insert({i,j-1}),t1.insert({i,j}),t1.insert({i+1,j}),t1.insert({i+1,j-1});
            t2.insert({i,j}),t2.insert({i,j+1}),t2.insert({i+1,j}),t2.insert({i+1,j+1});
            t3.insert({i+1,j-1}),t3.insert({i+2,j-1}),t3.insert({i+1,j}),t3.insert({i+2,j});
            t4.insert({i+1,j+1}),t4.insert({i+2,j+1}),t4.insert({i+1,j}),t4.insert({i+2,j});
            mind[i+1][j]=mind[i][j]+1;
            q.push({{i+1,j},t1});
            q.push({{i+1,j},t2});
            q.push({{i+1,j},t3});
            q.push({{i+1,j},t4});
        }
        if(j>0 && v[i][j-1]=='#' && t.find({i,j-1})==t.end() && mind[i][j-1]>mind[i][j]+1)
        {
            set<pair<ll,ll>> t1=t,t2=t,t3=t,t4=t;
            t1.insert({i,j-2}),t1.insert({i-1,j-2}),t1.insert({i,j-1}),t1.insert({i-1,j});
            t2.insert({i,j-1}),t2.insert({i-1,j-1}),t2.insert({i,j}),t2.insert({i-1,j+1});
            t3.insert({i,j-1}),t3.insert({i,j-2}),t3.insert({i+1,j-2}),t3.insert({i+1,j-1});
            t4.insert({i+1,j-1}),t4.insert({i,j-1}),t4.insert({i,j}),t4.insert({i+1,j});
            mind[i][j-1]=mind[i][j]+1;
            q.push({{i,j-1},t1});
            q.push({{i,j-1},t2});
            q.push({{i,j-1},t3});
            q.push({{i,j-1},t4});
        }
        if(j<m-1 && v[i][j+1]=='#' && t.find({i,j+1})==t.end() && mind[i][j+1]>mind[i][j]+1)
        {
            set<pair<ll,ll>> t1=t,t2=t,t3=t,t4=t;
            t1.insert({i-1,j}),t1.insert({i-1,j+1}),t1.insert({i,j+1}),t1.insert({i,j});
            t2.insert({i-1,j+1}),t2.insert({i-1,j+2}),t2.insert({i,j+1}),t2.insert({i,j+2});
            t3.insert({i,j}),t3.insert({i+1,j}),t3.insert({i,j+1}),t3.insert({i+1,j+1});
            t4.insert({i,j+2}),t4.insert({i+1,j+2}),t4.insert({i,j+1}),t4.insert({i+1,j+1});
            mind[i][j=1]=mind[i][j]+1;
            q.push({{i,j+1},t1});
            q.push({{i,j+1},t2});
            q.push({{i,j+1},t3});
            q.push({{i,j+1},t4});
        }
        if(i>0 && (v[i-1][j]=='.' || t.find({i-1,j})!=t.end()) && mind[i-1][j]>mind[i][j])
        {
            mind[i-1][j]=mind[i][j];
            q.push({{i-1,j},t});
        }
        if(i<n-1 && (v[i+1][j]=='.' || t.find({i+1,j})!=t.end()) && mind[i+1][j]>mind[i][j])
        {
            mind[i+1][j]=mind[i][j];
            q.push({{i+1,j},t});
        }
        if(j>0 && (v[i][j-1]=='.' || t.find({i,j-1})!=t.end()) && mind[i][j-1]>mind[i][j])
        {
            mind[i][j-1]=mind[i][j];
            q.push({{i,j-1},t});
        }
        if(j<m-1 && (v[i][j+1]=='.' || t.find({i,j+1})!=t.end()) && mind[i][j+1]>mind[i][j])
        {
            mind[i][j+1]=mind[i][j];
            q.push({{i,j+1},t});
        }
    }
    cout<<mind[n-1][m-1];
}