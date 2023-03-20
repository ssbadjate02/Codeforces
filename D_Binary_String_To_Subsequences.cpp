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
        string s;
        cin>>n>>s;
        char f=s[0];
        ll c=1,ans=0;
        // for(ll i=1;i<n;i++)
        // {
        //     if(s[i]==s[i-1]) c++;
        //     else ans=max(ans,c),c=1;
        // }   
        // ans=max(ans,c);/
        vector<set<ll>> x(2);
        x[s[0]-'0'].insert(1);
        vector<ll> v(n);
        v[0]=1;
        c=1;
        for(ll i=1;i<n;i++)
        {
            ll y=s[i]-'0';
            if(!x[1-y].empty())
            {
                v[i]=*x[1-y].begin();
                x[1-y].erase(x[1-y].begin());
                x[y].insert(v[i]);
            }
            else
            {
                x[1-y].insert(++c);
                --i;
            }
        }
        cout<<*max_element(v.begin(),v.end())<<"\n";
        for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";
    }   
}