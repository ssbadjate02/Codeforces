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
        ll n,q,summ=0;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
        }
        sort(all(v),greater<ll>());
        for(ll i=0;i<n;i++)
        {
            summ+=v[i];
            v[i]=summ;
        }
        while(q--)
        {
            ll k;
            cin>>k;
            if(k>summ)
            {
                cout<<"-1\n";
                continue;
            }
            ll x = lower_bound(all(v),k)-v.begin()+1;
            cout<<x<<"\n";
        }
    }   
}