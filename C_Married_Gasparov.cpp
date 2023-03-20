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
    ll n,x1,y1,x2,y2,x3,y3;
    cin>>n>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x2<x1 && y2<y1 && x3<x1 && y3<y1) cout<<"YES\n";
    else if(x2>x1 && y2<y1 && x3>x1 && y3<y1) cout<<"YES\n";
    else if(x2<x1 && y2>y1 && x3<x1 && y3>y1) cout<<"YES\n";
    else if(x2>x1 && y2>y1 && x3>x1 && y3>y1) cout<<"YES\n";
    else cout<<"NO\n";
    
}