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
    vector<double> v(4);
    for(ll i=0;i<4;i++) cin>>v[i];
    ll f=0,g=0;
    if(v[1]/v[0]==v[2]/v[1] && v[3]/v[2]==v[2]/v[1])
    {
        double x;
        x=v[1]/v[0];
        double next=x*v[3];
        if((ll)(next)==next) cout<<next;
        else cout<<42;
    }   
    else if(v[1]-v[0]==v[2]-v[1] && v[3]-v[2]==v[2]-v[1])
    {
        cout<<v[3]+(v[3]-v[2]);
    }
    else cout<<42;
}