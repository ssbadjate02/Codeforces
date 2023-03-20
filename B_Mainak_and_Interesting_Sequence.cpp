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

struct DSU {
    int N, cmpcnt;
    vector<int> data;
    DSU(int n): N(n), cmpcnt(n), data(n, -1) {}
 
    int par(int x) {
        return data[x] < 0? x : data[x] = par(data[x]);
    }
 
    bool merge(int x, int y) {
        x = par(x), y = par(y);
        if(x == y) return false;
        if(-data[x] < -data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        cmpcnt--;
        return true;
    }
 
};

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1)
        {
            cout<<"Yes\n"<<m<<"\n";
            continue;
        }
        if(n>m || (n%2==0 && m%2))
        {
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
        if(n%2)
        {
            for(ll i=0;i<n-1;i++) cout<<"1 ",m-=1;
            cout<<m;
        }
        else
        {
            for(ll i=0;i<n-2;i++) cout<<"1 ",m-=1;
            cout<<m/2<<" "<<m/2;
        }
        cout<<"\n";
    }   
}