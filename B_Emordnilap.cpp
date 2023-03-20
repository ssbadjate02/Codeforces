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

const ll N = 1e9+7;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    vector<ll> fact(100005);
    fact[0] = 1;
    for(ll i=1;i<fact.size();i++)
    {
        fact[i] = fact[i-1]*i;
        fact[i]%=N;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans = n*(n-1);
        ans%=N;
        ans*=fact[n];
        ans%=N;
        ans = (ans+N)%N;        
        cout<<ans<<"\n";
    }
}
//1 3 2 2 3 1