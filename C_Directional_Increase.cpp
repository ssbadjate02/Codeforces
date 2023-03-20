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
        ll n;
        cin>>n;
        vector<ll> v(n),p;
        for(ll i=0;i<n;i++) cin>>v[i];
        ll j=n-1;
        while(v[j]==0) n--,j--;
        for(ll i=0;i<n;i++) p.pb(v[i]);
        v=p;
        p.clear();
        p.resize(n,0);
        if(p==v)
        {
            cout<<"Yes\n";
            continue;
        }
        for(ll i=1;i<n;i++) p[i]=-1;
        ll f=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i-1]<=p[i-1]) 
            {
                f=1;
                break;
            }
            // cout<<p[i-1]<<" "<<v[i-1]<<"\n";
            p[i]-=(v[i-1]-p[i-1]-1);
            p[i-1] = v[i-1];
        }
        if(p[n-1] == v[n-1] && !f) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
/*
1 -4 3



*/