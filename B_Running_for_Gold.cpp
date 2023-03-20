#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f=0,ans=-1;
        cin>>n;
        vector<vector<ll>> v(n,vector<ll>(5));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<5;j++) cin>>v[i][j];
        }
        ll best=0;
        for(ll i=1;i<n;i++)
        {
            ll c=0;
            for(ll j=0;j<5;j++)
            {
                if(v[i][j]<v[best][j]) c++;
            }
            if(c>=3) best=i;
        }
        for(ll i=0;i<n;i++)
        {
            if(i==best) continue;
            ll c=0;
             for(ll j=0;j<5;j++)
            {
                if(v[i][j]>v[best][j]) c++;
            }
            if(c<3)
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"-1\n";
        else cout<<best+1<<"\n";
    }   
}