#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> v;
string a,b;
ll t,p;

bool good(ll m)
{
    string temp=a;
    for(ll i=0;i<=m;i++) temp.erase(temp.begin()+v[i]-1);
    ll j=0;
    for(ll i=0;i<t && j<p;i++)
    {
        if(a[i]==b[j]) j++;
    }
    return j==m;
}

int main()
{
    FASTIO;
    cin>>a>>b;
    t=a.size();
    p=b.size();
    v.resize(t);
    for(ll i=0;i<t;i++) cin>>v[i];
    ll l=0,r=t-1;
    while(r>l+1)
    {
        ll m=(l+r)/2;
        if(good(m)) l=m;
        else r=m;
    }
    cout<<l;
}   