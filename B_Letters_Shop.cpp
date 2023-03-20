#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,m;
string s;
vector<string> v;
vector<vector<ll>> c1,c2;

bool good(ll mid,ll k)
{
    ll p=v[k].size();
    ll j=0;
    for(ll i=0;i<26;i++)
    {
        if(c1[mid][i]<c2[k][i]) return 0;
    }
    return 1;
}

int main()
{
    FASTIO;
    cin>>n>>s>>m;
    v.resize(m);
    for(ll i=0;i<m;i++) cin>>v[i];
    c1.resize(n+1,vector<ll>(26));
    c2.resize(m,vector<ll>(26));
    for(ll i=1;i<=n;i++)
    {
        c1[i]=c1[i-1];
        c1[i][s[i-1]-'a']++;
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<v[i].size();j++) c2[i][v[i][j]-'a']++; 
    }
    for(ll i=0;i<m;i++)
    {
        ll l=0,r=n;
        while(r>l+1)
        {
            ll mid=(l+r)/2;
            if(good(mid,i)) r=mid;
            else l=mid;
        }
        cout<<r<<"\n";
    }   
}