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
    vector<ll> v(5);
    for(ll i=0;i<5;i++) cin>>v[i];
    for(ll i=1;i<5;i++)
    {
        ll a=v[i],b=v[i-1];
        cout<<(a ^ b);
    }
}