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
    ll n,i,l,r;
    cin>>n>>i>>l>>r;
    if(l==1 && r==n)
    {
        cout<<0;
    }
    else if(l==1)
    {
        cout<<abs(r-i)+1;
    }
    else if(r==n)
    {
        cout<<abs(i-l)+1;
    }
    else
    {
        if(i<r && i>l)
        {
            cout<<2*min(r-i,i-l)+max(r-i,i-l)+2;
        }
        else
        {
            if(i<=l)
            {
                cout<<r-i+2;
            }
            else
            {
                cout<<i-l+2;
            }
        }
    }


}