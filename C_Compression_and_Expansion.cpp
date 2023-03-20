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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<string> s(n);
        map<ll,ll> m;
        for(ll i=0;i<n;i++) s[i]="";
        for(ll i=1;i<=v[0];i++) s[0]+=i+'0',s[0]+='.';
        m[v[0]]++;
        for(ll i=1;i<n;i++)
        {
            s[i]=s[i-1];
            if(m.find(v[i])!=m.end())
            {
                for(ll j=1;j<=v[i];j++) s[i]+=j+'0',s[i]+='.';
            }
            else
            {
                s[i].clear();
                s[i]="1.";
                s[i]+=v[i]+'0';
                s[i]+='.';
            }
            m[v[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<s[i].size()-1;j++) cout<<s[i][j];
            cout<<"\n";
        }
    }   
}