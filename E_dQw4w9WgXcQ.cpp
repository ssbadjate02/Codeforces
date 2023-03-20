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
    ll x=0,e=0;
    vector<ll> a(6),b(6);
    for(ll i=0;i<6;i++) cin>>a[i];
    for(ll i=0;i<6;i++) cin>>b[i];   
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<6;j++)
        {
            if(a[i]>b[j]) x++;
            else if(a[i]==b[j]) e++;
        }
    }
    double y=(double)x/(double)(36),ans=0;
    double z=(double)e/(double)(36),n=1;
    // cout<<y<<" "<<z;
    for(ll i=0;i<200;i++)
    {
        ans+=n*y;
        n*=z;
    }
    // cout<<x<<" ";
    printf("%.5f", ans); 
} 