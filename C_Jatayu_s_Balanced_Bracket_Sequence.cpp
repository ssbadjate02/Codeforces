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
        ll n,c=0;
        string s;
        cin>>n>>s;
        stack<ll> st;
        DSU dsu(2*n);
        for(ll i=0;i<2*n;i++)
        {
            if(s[i]=='(') st.push(i);
            else 
            {
                ll x = st.top();
                st.pop();
                dsu.merge(x,i);
                if(x && s[x-1]==')')
                {
                    dsu.merge(x-1,i);
                }
            }

        }
        cout<<dsu.cmpcnt<<"\n";
    }   
}