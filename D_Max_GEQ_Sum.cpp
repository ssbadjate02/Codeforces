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

ll maxSubArraySum(vector<ll>&a, ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0,maxx=-1e9;
 
    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        maxx=max(maxx,a[i]);
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if(max_so_far>maxx) return -1;
        if (max_ending_here < 0)
            max_ending_here = 0,maxx=-1e9;
    }
    return max_so_far;
}

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
        ll x= maxSubArraySum(v,n);
        if(x==-1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}