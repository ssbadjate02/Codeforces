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

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,j=1;
        cin>>n;
        vector<ll> v(n);
        v[n-1]=n;
        for(ll i=n-2;i>=0;i--,j++)
        {
            if(j%2) v[i]=v[i+1]-i-1;
            else v[i]=v[i+1]+i+1;
        }
        for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";
    }   
}
/*
n=5
3 2 4 1 5
*/