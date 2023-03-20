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
        ll n;
        cin>>n;
        vector<ll> a(n),b(n),cnt(n+1),ans(n+1);
        for(auto &i:a) cin>>i;
        for(auto &i:b) cin>>i;

        for(ll i=1;i<n;i++) b[i]+=b[i-1];
        b.insert(b.begin(),0);
        for(ll i=0;i<n;i++)
        {
            ll j = upper_bound(all(b),b[i]+a[i]) - b.begin() - 1;
            ans[j] += a[i] - (b[j] - b[i]);
            cnt[i]++;
            cnt[j]--;
        }
        for(int i=0;i<n;i++)
        {
            ans[i]+=cnt[i]*(b[i+1]-b[i]);
            cnt[i+1]+=cnt[i];
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }   
}
/*
    bj - bi<=ai
    bj<=bi+ai
*/