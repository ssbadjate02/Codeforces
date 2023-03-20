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
        ll n,m,r,c,f=0,g=0;
        cin>>n>>m>>r>>c;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) if(v[i][j]=='B') g=1;
        }
        if(v[r-1][c-1]=='B')
        {
            cout<<"0\n";
            continue;
        }
        for(ll i=0;i<m;i++) if(v[r-1][i]=='B') f=1;
        for(ll i=0;i<n;i++) if(v[i][c-1]=='B') f=1;
        if(f) cout<<"1\n";
        else if(g) cout<<"2\n";
        else cout<<"-1\n";
    }   
}