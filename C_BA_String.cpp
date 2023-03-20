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
        ll n,k,x,c=0;
        cin>>n>>k>>x;
        x--;
        string s;
        cin>>s;
        vector<ll> v,a;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='*') c++;
            else if(c) v.pb(k*c),c=0;
        }
        if(c)v.pb(k*c);
        for(ll i=0;i<v.size();i++)
        {
            // cout<<v[i]<<" ";
            a.pb(x%(v[i]+1));
            x/=(v[i]+1);
        }
        // cout<<"\n";
        ll j=a.size()-1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='*' && (i==0 || s[i-1]!='*'))
            {
                while(a[j]--) cout<<"b";
                j--;
            }
            else if(s[i]!='*') cout<<s[i];
        }
        cout<<"\n";
    }   
}