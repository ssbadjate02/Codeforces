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
        ll n,x,ans=0;
        cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(all(v));
        map<ll,ll> m;
        for(ll i=0;i<n;i++)       
        {
            auto it=m.find(v[i]/x);
            if(v[i]%x == 0 && it!=m.end())
            {
                m[v[i]/x]--;
                if(m[v[i]/x]==0) m.erase(v[i]/x);
            }
            else m[v[i]]++;
        }
        for(auto e:m) ans+=e.second;
        cout<<ans<<"\n";
    }   
}