#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

double c;

bool good(double m)
{
    double x = sqrt(m);
    if(m*m + x>c) return 1 ;
    return 0;   
}

int main()
{
    FASTIO;
    cin>>c;
    double l=1,r=1e8;
    for(ll i=0;i<100;i++)
    {
        double m=(l+r)/2;
        if(good(m)) r=m;
        else l=m;
    }
    cout<<setprecision(20)<<l;
}