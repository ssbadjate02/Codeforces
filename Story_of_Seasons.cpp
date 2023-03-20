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

/*
3 3
2 10
1 5
3 2

1 5
2 10
3 3
3 2
*/

bool cmp(pair<ll,ll>&a,pair<ll,ll>&b)
{
    if(a.ff==b.ff) return b.ss>a.ss;
    return a.ff<b.ff;
}
ll d,n,x;
vector<pair<ll,ll>> v;

int main()
{
    FASTIO;
    ll t,xx=0;
    cin>>t;
    while(t--)
    {
        xx++;
        cin>>d>>n>>x;
        multiset<pair<ll,ll>> s;
        v.clear();
        v.resize(n);
        map<pair<ll,ll>,ll,greater<pair<ll,ll>>> m;
        for(ll i=0;i<n;i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            v[i] = {d-b,c};
            m[{d-b,c}]+=a;
        }
        sort(all(v),cmp);
        ll ans=0,i=0;
        vector<ll> ansd(d+1),vis(n+1);
        for(ll time=d;time>0;time--)
        {
           
            
        }
        cout<<"Case #"<<xx<<": "<<accumulate(all(ansd),0ll)<<"\n";

    }
}
