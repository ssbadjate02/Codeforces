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
    string s;
    cin>>s;
    ll x=(n-11)/2+1;
    ll i,c=0;
    for (i=0;c<x && i<n;i++)
    {
        if (s[i] == '8')
            c++;
    }
    if (i<2 * x)
        cout<<"YES";
    else
        cout<<"NO";
}
