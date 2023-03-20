#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

//3 2 4 1 3
//3 3 3 3 3

//4 2 1 6 8
//8 2 1 6 8
//8 8 8 8 8

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
        if((v[0] + v[n-1])%2) v[n-1] = v[0];
        else v[0] = v[n-1];
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        cout<<n-1<<"\n"<<"1 "<<n<<"\n";
        for(ll i=1;i<n-1;i++)
        {
            if((v[0]+v[i])%2) cout<<1<<" "<<i+1<<"\n";
            else cout<<i+1<<" "<<n<<"\n";
        }

    }   
}