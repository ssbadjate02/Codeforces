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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        string a,b;
        cin>>a>>b;
        vector<ll>v;
        for(ll i=0;i<n;i++) if(a[i]!=b[i]) v.pb(i);
        if(v.size()%2)
        {
            cout<<"-1\n";
            continue;
        }
        if(v.size()==2 && v[1] - v[0]==1)
        {
            cout<<min(x,2*y)<<"\n";
            continue;
        }
        cout<<(v.size()/2)*y<<"\n";
    }   
}