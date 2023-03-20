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

vector<ll> v;
ll n;
ll good(ll np)
{
    ll o=0;
    vector<ll> vt(n);
    vt[0] = v[0];
    for(ll i=np;i<n;i++) o+=v[i];
    for(ll i=0;i<np;i++)  
    {
        ll t = v[i]
    }
    for(ll i=0;i<np;i++) o-=(t-v[i]); 
    t=max(t,(o+np-1)/np);
    return t;
}



int main()
{
    cin>>n;
    v.clear();
    v.resize(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll mint = good(n);
    ll q;
    cin>>q;
    while(q--)
    {
        ll time;
        cin>>time;
        if(time<mint) 
        {
            cout<<"-1\n";
            continue;
        }
        cout<<mint<<"\n";
        // ll l=1,r = n; 
        // while(r>l+1)
        // {
        //     ll m =(l+r)/2;
        //     if(good(m)<=time) r=m;
        //     else l=m;
        // }
        // if(good(l)<=time) cout<<l<<"\n";
        // else cout<<r<<"\n";
    } 
}