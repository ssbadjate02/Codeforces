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
    ll n,m,x=0;
    string s,t="abc";
    cin>>n>>m>>s; 
    vector<vector<ll>> p(6,vector<ll>(n+1));  
    do
    {
        // string temp="";
        // p[x][0]=(s[0]!=t[0]);
        for(ll i=0;i<n;i++) p[x][i+1]=p[x][i]+(s[i]!=t[i%3]);
        x++;
    } while (next_permutation(t.begin(),t.end()));
    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=1e9+7;
        for(ll i=0;i<6;i++)
        {
            ans=min(ans,p[i][r]-p[i][l-1]);
        }
        cout<<ans<<"\n";
    }
}