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
        if(x>y)
        {
            cout<<x*y/(__gcd(x,y))+y<<"\n";
        }
        else if(x<y)
        {
            cout<<((y/x)*x+y)/2<<"\n";
        }
        else cout<<x<<"\n";

        // cout<<56202848%69420<<" "<<42068%56202848<<"\n";
    }   
}