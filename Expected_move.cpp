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
        ll n,ans=0,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            ans+=v[i]/k;
            v[i]%=k;
        }
        ll l=0,r=n-1;
        sort(v.begin(),v.end());
        while(l<r)
        {
            if(v[l]+v[r]>=k)
            {
                ans++;
                l++;
                r--;
            }
            else l++;
        }
        cout<<ans<<"\n";
    }
}
/*
1 1 1 1 2 4 5 5 5 5
*/
