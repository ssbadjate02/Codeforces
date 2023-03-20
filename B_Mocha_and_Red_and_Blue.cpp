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
        ll n;
        cin>>n;
        vector<ll> v(n,-1);
        for(ll i=0;i<n;i++)
        {
            char a;
            cin>>a;
            if(a=='R') v[i]=1;
            else if(a=='B') v[i]=0;
        }
        ll i=0;
        // for(ll i=0;i<n;i++) cout<<v[i];
        // cout<<"\n";
        while(v[i]==-1)i++;
        for(ll j=i-1;j>=0;j--)
        {
            v[j]=(!v[j+1]);
        }
        for(ll j=i+1;j<n;j++)
        {
            if(v[j]==-1) v[j]=(!v[j-1]);
        }
        string ans="";
        for(ll j=0;j<n;j++)
        {
            if(v[j]==1) ans+="R";
            else if(v[j]==0) ans+="B";
        }
        cout<<ans<<"\n";
    }   
}