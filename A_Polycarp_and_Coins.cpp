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
        ll n;
        cin>>n;
        if(n%3==0)
        {
            cout<<n/3<<" "<<n/3<<"\n";
        }
        else
        {
            int c[3]={0};
            c[1]=n/3;
            c[2]=n/3;
            c[n%3]++;
            cout<<c[1]<<" "<<c[2]<<"\n";
        }
    }   
}