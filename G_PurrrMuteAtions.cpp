#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
// #define N 2e5+7

ll N = 1e9+7;
 
int power(ll x,ll y)
{
    ll res = 1;
 
    x=x%N;
   if(x==0) return 0;
 
    while(y>0)
    {
        if(y&1)
            res=(res*x)%N;
        y = y>>1;
        x = (x*x)%N;
    }
    return res;
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
        map<ll,ll> m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        ll x=*max_element(v.begin(),v.end());
        if(m[x]>=2) cout<<"0\n";
        else
        {
            ll f=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i]!=x && m[v[i]]>=3)
                {
                    f=1;
                    break;
                }
            }
            if(f) cout<<"0\n";
            else
            {
                ll a=0;
                for(auto it=m.begin();it!=m.end();it++) if(it->first!=x && it->second==1) a++;
                cout<<power((ll)2,a)<<"\n";
            }
        }

    }   
}