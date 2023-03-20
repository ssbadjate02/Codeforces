#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
const double eps = 1e-9;

ll n;
vector<pair<ll,ll>> v;
ll good(double m)
{
    double lb=-1e7,ub=1e9;
    for(ll i=0;i<n;i++)
    {
        ll xi=v[i].first,vi=v[i].second;
        ub=min(ub,(double)xi+(double)vi*m);
        lb=max(lb,(double)xi-(double)vi*m);
    }
    return ub-lb>=-eps ;
}

int main()
{
    FASTIO;
    cin>>n; 
    v.resize(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].first;
    }
    for(ll i=0;i<n;i++) cin>>v[i].second;
    double l=0,r=1e15   ; 
    // if(good(0))
    // {
    //     cout<<0;
    //     return 0;
    // }
    // while(!good(r)) r*=2; /
    for(ll i=0;i<200;i++)
    {
        double m = l + (r-l)/2.00;
        if(good(m)) r=m;
        else l=m;
    }
    cout << fixed << setprecision(20) << r;
}