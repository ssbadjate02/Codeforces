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
        ll w,l,m,x,y;
        cin>>w>>l>>m>>x>>y;
        if(m-x>=w && m-y>=w) cout<<"JUMP\n";
        else cout<<"FALL\n";
    }   
}