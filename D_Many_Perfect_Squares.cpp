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
        ll n,maxans=1;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(all(v));
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll diff = v[j] - v[i];
                for(ll k=1;k*k<=diff;k++)
                {
                    if(diff%k) continue;
                    ll p = k;
                    ll q = diff/k;
                    if(p%2 == q%2)
                    {
                        ll m = (p+q)/2;
                        ll x = m*m - v[j]; 
                        if(x<0) continue;
                        // cout<<i<<" "<<j<<" "<<m*m - v[j]<<" "<<n*n - v[i]<<" "<<x<<"\n";
                        ll ans=0;
                        for(ll l=0;l<n;l++)
                        {
                            ll y = sqrt(v[l]+x);
                            // cout<<i<<" "<<j<<" "<<k<<" "<<n<<"\n";
                            if(y*y == v[l]+x) ans++;
                        }
                        maxans = max(ans,maxans);
                    }
                }
            }
        }
        cout<<maxans<<"\n";
    }   
}
/*
(aj+X) - (ai+X) = m*m - n*n = (m+n)(m-n) = pq
*/