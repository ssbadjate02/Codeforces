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
        ll n,c=0;
        cin>>n;
        vector<ll> a,b;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==0) c++;
            else a.pb(x);
        }
        n = a.size();
        while(a.size()>1)
        {
            b.clear();
            if(c)
            {
                b.pb(a[0]);
                c--;
            }
            for(ll i=1;i<a.size();i++) 
            {
                if(a[i]==a[i-1])
                {
                    c++;
                    continue;
                }
                b.pb(a[i]-a[i-1]);
            }
            sort(all(b));
            a = b;
        }
        if(a.size()) cout<<a[0]<<"\n";
        else cout<<"0\n";
    }   
}