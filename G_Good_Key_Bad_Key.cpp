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
        ll n,k,f=0;
        cin>>n>>k;
        vector<ll> v(n),p(n+1),s(n+1);
        for(ll i=0;i<n;i++) cin>>v[i], p[i+1] = p[i]+v[i];
        ll c=0,x=1;
        for(ll i=n-1;i>=0;i--)
        {
            for (ll j=i;j>=0 && v[i];j--) 
            {
				v[i] /= 2;
				s[j] += v[i];
			}
        }
        c = s[0];
        for(ll i=0;i<n;i++)
        {   
            c = max(c,p[i+1] - k*(i+1)+s[i+1]);
        }
        cout<<max(c,0ll)<<"\n";
    }   
}