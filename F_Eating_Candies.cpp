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
        ll n,l=-1,suml=0,sumr=0,ans;
        cin>>n;
        vector<ll> v(n);
        ll r=n;
        for(ll i=0;i<n;i++) cin>>v[i];
        while(l<r)
        {
            if(suml==sumr)
            {
                ans=l+1+n-r;
                l++;
                suml+=v[l];
                r--;
                sumr+=v[r];
            }
            else if(suml<sumr)
            {
                l++;
                suml+=v[l];
            }
            else
            {
                r--;
                sumr+=v[r];
            }
        }
         if(suml==sumr && r!=l)
        {
            ans=n;
        }
        cout<<ans<<"\n";
    }   
}