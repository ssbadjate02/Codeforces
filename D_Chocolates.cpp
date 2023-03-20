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
        ll x,y;
        cin>>x>>y;
        if(y>x)
        {
            if((y-x)%2)
            {
                cout<<"1\n";
            }
            else cout<<"2\n";
        }
        else if(y<x)
        {
            if((x-y)%2==0) cout<<"1\n";
            else cout<<"2\n";
        }
        else cout<<"0\n";
    }   
}