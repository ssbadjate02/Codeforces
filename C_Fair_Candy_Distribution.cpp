#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

bool func(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    FASTIO;
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> f(n);
    for(ll i=0;i<n;i++)
    {
        f[i].first=k/n;
        f[i].second=i;
    }
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++) cin>>v[i].first,v[i].second=i;
    k=k%n;
    sort(v.begin(),v.end());
    for(ll i=0;i<k;i++) f[v[i].second].first++;
    // for(ll i=0;i<n;i++) cout<<f[i]<<"\n";
    // sort(f.begin(), f.end(), func);
    for(ll i=0;i<n;i++) cout<<f[i].first<<"\n";

}