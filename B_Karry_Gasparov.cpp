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
    ll n,m;
    cin>>n>>m;
    if(n==1 || m==1)
    {
        cout<<1;
        return 0;
    }
    cout<<(n*m+1)/2;   
}