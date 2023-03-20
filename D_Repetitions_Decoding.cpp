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

ll n,x=0;
vector<ll> v;
vector<ll> d;
vector<pair<ll,ll>> ans;
void f(ll k)
{
    if(k==v.size()) return;
    // cout<<k<<"\n";
    for(ll i=k+1;i<v.size();i++)
    {
        if(v[i]==v[k])
        {
            d.pb(2*(i-k));
            for(ll j=i+1;j<i+i-k;j++)
            {
                ans.pb({j+x,v[j-i+k]});
                // cout<<j+x<<" "<<v[j-(i-k)]<<"\n";
                v.insert(v.begin()+i+1,v[j-i+k]);
            }
            x+=i-k-1;
            // cout<<v[i+1]<<"\n";
            f(i+1);
            return;
        }
    }
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        x=0;
        ll fg=0;
        cin>>n;
        v.clear();
        v.resize(n);
        ans.clear();
        d.clear();
        map<ll,ll> m;
        for(ll i=0;i<n;i++) cin>>v[i],m[v[i]]++;
        for(auto e:m) if((e.second)%2==1) fg=1;
        if(fg)
        {
            cout<<"-1\n";
            continue;
        }
        f(0);
        cout<<ans.size()<<"\n";
        for(ll i=0;i<ans.size();i++) cout<<ans[i].ff<<" "<<ans[i].ss<<"\n";
        // for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
        // cout<<"\n";
        cout<<d.size()<<"\n";   
        for(ll i=0;i<d.size();i++) cout<<d[i]<<" ";
    }   
}