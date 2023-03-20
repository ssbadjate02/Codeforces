#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

bool good(double m,ll c)
{
    double x = m;
    if(m*m + x>c) return 1 ;
    return 0;   
}

int main()
{
    FASTIO;
    ll t,p;
    cin>>t;
    p=t;
    while(t--)
    {
        ll g,x=0,a=0;
        cin>>g;
        vector<ll> v(g+1),ans;
        for(ll i=0;i<=g;i++)
        {
            double l=0,r=1e12;
             for(ll j=0;j<150;j++)
            {
                double m=(l+r)/2;
                if(good(m,2*g+i*(i+1))) r=m;
                else l=m;
            }
            // cout<<l<<"-"<<i<<"\n";
            if((ll)(l)==l) a++;
        }
        // cout<<"\n";
        // for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
        // cout<<"\n";
        cout<<"Case #"<<p-t<<": "<<a<<"\n";
    }

}