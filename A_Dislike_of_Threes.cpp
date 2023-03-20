#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> v;
ll j=1;


int main()
{
    FASTIO;
    for(ll i=0;i<10001;i++)
    {
        if(j%3!=0 && j%10!=3) v.pb(j);
        j++;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n--;
        cout<<v[n]<<"\n";
    }
}