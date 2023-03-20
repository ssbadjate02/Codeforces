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
        ll a,b,c,f=0;
        double d;
        cin>>a>>b>>c;
        d=((double)c-(double)a)/2;
        if((2*b-a)%c==0 && 2*b-a>=c) f=1;
        else if((2*b-c)%a == 0 && 2*b-c>=a) f=1;
        else if((ll)d == d && (a+(ll)d)%b==0 && a+d>=b) f=1;

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}