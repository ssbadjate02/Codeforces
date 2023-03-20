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
    ll n,a,x,y;
    cin>>n>>a>>x>>y;
    // if(n>a)
    // {
    //     cout<<a*x+(n-a)
    // }   
    cout<<min(n,a)*x + max(0ll,n-a)*y;
}