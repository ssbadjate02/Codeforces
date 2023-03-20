#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

int main()
{
    FASTIO;
    ll n,q,c;
    cin>>n>>q>>c;
    vector<pair<ll,ll>> v(n);
    vector<ll> b(n),px(101),py(101);  
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].ff>>v[i].ss>>b[i];
    }
    for(ll j=0;j<=100;j++)
    {
        for(ll i=0;i<n;i++)
        {
            if(v[i].ff<=j) px[j]++;
            if(v[i].ss<=j) py[j]++;
        }
    }
    while(q--)
    {
        ll t,x1,y1,x2,y2;
        cin>>t>>x1>>y1>>x2>>y2;
        ll temp=x1;
        x1=min(x1,x2);
        x2=max(temp,x2);
        temp=y1;
        y1=min(y1,y2);
        y2=max(y2,temp);
        ll minn=min(px[x2]-px[x1-1],py[y2]-py[y1-1]);
        
    }

} 