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
        ll n,m;
        cin>>n>>m;
        map<string,vector<pair<ll,ll>>> mp;
        vector<string> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            string b="";
            for(ll j=1;j<m;j++)
            {
                b="";
                b+= v[i][j-1];
                b+=v[i][j];
                mp[b].pb({i,j}); 
            }
        }
        string s;
        cin>>s;
        
    }   
}