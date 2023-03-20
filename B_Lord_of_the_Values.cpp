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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        cout<<3*n<<"\n";
        for(ll i=1;i<n;i+=2   )
        {
            cout<<"2 "<<i<<" "<<i+1<<"\n";
            cout<<"1 "<<i<<" "<<i+1<<"\n";
            cout<<"1 "<<i<<" "<<i+1<<"\n";
            cout<<"2 "<<i<<" "<<i+1<<"\n";
            cout<<"1 "<<i<<" "<<i+1<<"\n";
            cout<<"1 "<<i<<" "<<i+1<<"\n";
        }
    }   
}