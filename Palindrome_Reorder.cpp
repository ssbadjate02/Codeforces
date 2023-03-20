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
    vector<ll> v(26);
    string s;
    cin>>s;
    ll n=s.size(),c=0;
    for(ll i=0;i<n;i++) v[s[i]-'A']++;
    for(ll i=0;i<26;i++)
    {
        if(v[i]%2)
        {
            c++;
        }
    }   
    if(c>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<char> ans(n);
    if(c==1)
    {
        for(ll i=0;i<26;i++)
        {
            if(v[i]%2)
            {
                ans[n/2]=i+'A';
                v[i]--;
                break;
            }
        }
    }
    map<char,ll> m;
    for(ll i=0;i<26;i++)
    {
        if(v[i]!=0) m[i+'A']=v[i];
    }
    auto it=m.begin();
    for(ll i=0;i<n/2;i++)
    {
        if(it->second==0) it++;
        ans[i]=it->first;
        ans[n-i-1]=it->first;
        it->second-=2;
    }
    for(ll i=0;i<n;i++) cout<<ans[i];
}