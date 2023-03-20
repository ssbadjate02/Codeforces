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

ll  maxSubArraySum(vector<ll>&a, ll size, ll x)
{
    ll max_so_far = INT_MIN, max_ending_here = 0,f=0;
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(a[i]==x) f=1;
        if(a[i]>x)
        {
            // m.clear();
            f=0;
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here && f)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            // m.clear();
            f=0;
        }
    }
    // if(!m[x]) return -100;
    return max_so_far-x;
}

int main()
{
    FASTIO;
    ll n;
    cin>>n;
    vector<ll> v(n),a;
    for(ll i=0;i<n;i++) cin>>v[i];
    a=v;
    sort(all(a));
    // unique(all(a));
    // for(ll i=0;i<a.size();i++) cout<<a[i]<<" ";
    ll maxx=0;
    for(ll e=-30;e<=30;e++)
    {
        // cout<<e<<" "<<(maxSubArraySum(v,n,e))<<"\n";
        maxx=max(maxx,maxSubArraySum(v,n,e));
    }
    cout<<maxx<<"\n";
}