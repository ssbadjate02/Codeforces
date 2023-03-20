#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<ll> v;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    v.pb(0);
    for(ll i=1;i<100001;i++)
    {
        v.pb(i*(i+1)/2);
    }
    // for(ll i=0;i<100;i++) cout<<v[i]<<" ";
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0\n";
            continue;
        }
        if(a>b) swap(a,b);
        ll i=1;
        while(1)
        {
            ll sum=i*(i+1)/2;
            if(sum>=(b-a) && sum%2==(b-a)%2)
            {
                cout<<i<<"\n";
                break;
            }   
            i++;
        }
    }   
}