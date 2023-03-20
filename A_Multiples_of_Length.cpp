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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    if(n==1)
    {
        cout<<"1 1\n0\n1 1\n0\n1 1\n"<<-v[0]<<"\n";
    }      
    if(n!=1)
    {
        cout<<"1 1\n"<<-v[0]<<"\n";
        cout<<1<<" "<<n<<"\n0 ";
        for(ll i=1;i<n;i++) cout<<(-n)*(v[i])<<" ";
        cout<<"\n2 "<<n<<"\n";
        for(ll i=1;i<n;i++) cout<<(n-1)*v[i]<<" ";
    }
}