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
    ll n,k;
    cin>>n>>k;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    set<string> s(v.begin(),v.end());
    vector<string> x;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            string t="";
            for(ll l=0;l<k;l++)
            {
                if(v[i][l]==v[j][l]) t+=v[i][l];
                else
                {
                   vector<ll> c(26);
                   c[v[i][l]-'A']++;
                   c[v[j][l]-'A']++;
                   if(c['S'-'A']==0) t+='S';
                   else if(c['E'-'A']==0) t+='E';
                   else t+='T';
                }
            }
            x.pb(t);
        }
    }   
    ll ans=0;
    for(auto e:x)
    {
        if(s.find(e)!=s.end()) ans++;
    }
    cout<<ans/3<<"\n";
}