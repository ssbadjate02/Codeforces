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


struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};
 
vector<vector<int>> dir = {{0,1}, {0,-1}, {1,0}, {-1,0}};
class Solution {
public:
    /**
     * @param n: An integer
     * @param m: An integer
     * @param operators: an array of point
     * @return: an integer array
     */
    vector<int> parent,siz;
    void build(int n)
    {
        parent.resize(n);
        siz.resize(n,1);
        for(int i=0;i<n;i++) parent[i] = i;
    }
    int find_set(int a)
    {
        if(a==parent[a]) return a;
        return parent[a] = find_set(parent[a]);
    }
    void union_set(int a,int b)
    {
        a = find_set(a);
        b = find_set(b);
        if(a==b) return;
        if(siz[a]<siz[b]) swap(a,b);
        parent[b] = a;
        siz[a]+=siz[b];
    }
    vector<int> numIslands2(int n, int m, vector<Point> &v) 
    {
        vector<vector<int>> grid(n,vector<int>(m,0));
        build(n*m);
        if(v.empty()) return {};
        int ans=0;
        vector<int> a;
        for(int i=0;i<v.size();i++)
        {
            int x = v[i].x;
            int y = v[i].y;
            grid[x][y] = 1;
            ans++;
            for(int j=0;j<4;j++)
            {
                int tx = x+dir[j][0]; 
                int ty = y+dir[j][1];
                if(tx>=0 && tx<n && ty>=0 && ty<m && grid[tx][ty])
                {
                    if(find_set(x*m+y)!=find_set(tx*m+ty)) ans--;
                    union_set(x*m+y,tx*m+ty);
                }
            }
            a.pb(ans);
        }
        return a;
    }
};

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<Point>v(k);
    for(int i=0;i<k;i++) 
    {
        int x,y;
        cin>>x>>y;
        v[i] = {x,y};
    }
    Solution s;
    vector<int> ans = s.numIslands2(n,m,v);
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}