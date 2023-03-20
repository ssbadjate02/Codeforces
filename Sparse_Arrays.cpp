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
    ll n;
    cin>>n;
    map<string,ll> m;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<"\n";
    }
}