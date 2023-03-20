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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<ll,ll>> v(n+1,{-1,-1});
    ll x=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            if(v[x].first!=-1) 
            {
                v[v[x].first].second=i+1;
                v[i+1].first=v[x].first;
            }
            v[x].first=i+1;
            v[i+1].second=x;
        }
        else
        {
            if(v[x].second!=-1) 
            {
                v[v[x].second].first=i+1;
                v[i+1].second=v[x].second;
            }
            v[x].second=i+1;
            v[i+1].first=x;
        }
        x++;
    }
    ll i=0;
    for(i=0;i<=n;i++)
    {
        if(v[i].first==-1) break;
    }
    
    ll j=0;
    while(j<=n)
    {
        cout<<i<<" ";
        i=v[i].second;
        if(i==-1) break;
    }
}