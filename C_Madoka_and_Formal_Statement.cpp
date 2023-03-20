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

bool cmp(pair<ll,pair<ll,ll>> a, pair<ll,pair<ll,ll>> b)
{
    if(a.first==b.first && b.ss.ff==a.ss.ff) return a.ss.ss<b.ss.ss;
    if(a.ff==b.ff) return a.ss.ff<b.ss.ff;
    return a.ff>b.ff;
}

void rotate(vector<ll>&arr, ll d, ll n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f=0;
        cin>>n;
        vector<pair<ll,pair<ll,ll>>> s;
        vector<ll> v(n),d(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++) 
        {
            cin>>d[i];
            if(d[i]<v[i]) f=1;
        }
        ll x = max_element(all(v)) - v.begin();
        rotate(v,n-1-x,n);
        rotate(d,n-1-x,n);
        // for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        // cout<<"\n";
        // for(ll i=0;i<n;i++) cout<<d[i]<<" ";
        // cout<<"\n\n";
        // cout<<f;
        for(ll i=1;i<n;i++)
        {
            if(d[i]-v[i]>d[i-1]-v[i-1]) f=1;
        }
        // cout<<f;
        cout<<(!f?"YES\n":"NO\n");
    }   
}