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
    ll n,ans=0,c=1;
    cin>>n;
    map<ll,ll> m;
    vector<ll> v(n),a;
    for(ll i=0;i<n;i++) cin>>v[i],m[v[i]]++;
    sort(v.begin(),v.end());
    a=v;
    unique(v.begin(),v.end());  
    vector<ll> p(n); 
    for(ll i=1;i<n;i++)
    {
        if(v[i]==v[i-1]+1) 
        {
            c++;
        }
        else
        {
            ans+=c*(c+1)/2;
            for(ll j=i;j>i-c;j--)
            {
                ans+=(m[v[i]]-1)*(c*(c+1)/2-(i-j)*(i-j+1)/2-(c-(i-j)-1)*(c-(i-j))/2+1);
            }
            c=1;
        }
    }
    ll i=v.size()-1;
    c=5;
    for(ll j=i;j>i-c;j--)
    {
        ans+=(m[v[i]]-1)*(c*(c+1)/2-(i-j)*(i-j+1)/2-(c-(i-j)-1)*(c-(i-j))/2+1);
    }
    cout<<ans<<"\n";
}