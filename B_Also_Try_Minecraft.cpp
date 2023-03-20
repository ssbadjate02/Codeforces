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
  
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n),p(n+1),s(n+1);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=1;i<n;i++)
        {
            p[i] = p[i-1];
            if(v[i]<v[i-1]) p[i]+=(v[i-1]-v[i]);
        }
        for(ll i=n-2;i>=0;i--)
        {
            s[i] = s[i+1];
            if(v[i+1]>v[i]) s[i]+=(v[i+1]-v[i]);
        }
        for(ll i=0;i<q;i++)
        {
            ll l,r;
            cin>>l>>r;
            l--;
            r--;
            if(l<r)cout<<p[r] - p[l]<<"\n";
            else
            {
                cout<<s[r] - s[l]<<"\n";
            }
        }
       
}