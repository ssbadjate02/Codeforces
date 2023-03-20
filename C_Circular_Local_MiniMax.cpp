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
        vector<ll> v(n),b,z;
        map<ll,ll> m;
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(all(v));
        if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        ll l=0,r=n/2,f=0;
        while(r<n)
        {
            b.pb(v[l]);
            b.pb(v[r]);
            l++;
            r++;
        }
        for(ll i=0;i<n;i++)
        {
            if(!((b[i]>b[(i+n-1)%n] && b[i]>b[(i+1)%n]) || (b[i]<b[(i+n-1)%n] && b[i]<b[(i+1)%n])))
            {
                // cout<<i;
                f=1;
                break;
            }
        }
        if(f) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(auto e:b) cout<<e<<" ";
            cout<<"\n";
        }

    }   
}

// 1 1 2 2 3