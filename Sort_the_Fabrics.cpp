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
    ll t,xx=0;
    cin>>t;

    while(t--)
    {
        xx++;
        ll n;
        cin>>n;
        vector<pair<string,pair<int,int>>> a(n);
        vector<pair<int,pair<int,string>>> b(n);
        for(ll i=0;i<n;i++)
        {
            string s;
            ll d,u;
            cin>>s>>d>>u;
            a[i] = {s,{u,d}};
            b[i] = {d,{u,s}};
        }
        sort(all(a));
        sort(all(b));
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i].ss.ff==b[i].ss.ff) ans++;
        }
        cout<<"Case #"<<xx<<": "<<ans<<"\n";
    }   
}