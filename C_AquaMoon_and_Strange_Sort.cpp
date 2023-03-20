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
        vector<ll> v1(n),v2;
        for(ll i=0;i<n;i++) cin>>v1[i];
        v2=v1;
        sort(v2.begin(),v2.end());
        vector<ll> co1(100005),ce1(100005),co2(100005),ce2(100005);
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ce1[v1[i]]++;
            }
            else co1[v1[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ce2[v2[i]]++;
            }
            else co2[v2[i]]++;
        }
        if(co1==co2 && ce1==ce2) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}