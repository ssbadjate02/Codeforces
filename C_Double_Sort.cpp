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
        ll n,f=0;
        cin>>n;
        vector<pair<ll,ll>> v(n),b;
        for(ll i=0;i<n;i++) cin>>v[i].ff;
        for(ll i=0;i<n;i++) cin>>v[i].ss;
        b=v;
        sort(all(v));
        for(ll i=1;i<n;i++)
        {
            if(v[i].ss<v[i-1].ss)
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"-1\n";
        else
        {
            vector<pair<ll,ll>> ans;
            for(ll i=0;i<n;i++)
            {
                ll j = find(b.begin()+i,b.end(),v[i])-b.begin();
                if(i==j) continue;
                ans.pb({i+1,j+1});
                swap(b[i],b[j]);
            }
            cout<<ans.size()<<"\n";
            for(ll i=0;i<ans.size();i++) cout<<ans[i].ff<<" "<<ans[i].ss<<"\n";
        }
    }   
}