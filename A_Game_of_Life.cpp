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
        string s;
        cin>>s;
        while(m--)
        {
            vector<ll> v;
            for(ll i=1;i<n-1;i++)
            {
                ll f=0,g=0;
                if(s[i]=='1') continue;
                if(s[i-1]=='1') f=1;
                if(s[i+1]=='1') g=1;
                if((f || g) && !(f && g)) v.pb(i);
            }
            if(s[0]=='0' && s[1]=='1') v.pb(0);
            if(s[n-1]=='0' && s[n-2]=='1') v.pb(n-1);
            for(ll i=0;i<v.size();i++) s[v[i]]='1';
            if(v.empty()) break;
            v.clear();
        }
        cout<<s<<"\n";
    }   
}