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
        ll n,ans=0;
        cin>>n;
        vector<ll> a(n),b(n),v,u;
        multiset<ll,greater<ll>> s1,s2;
        for(ll i=0;i<n;i++) cin>>a[i],s1.insert(a[i]);
        for(ll i=0;i<n;i++) cin>>b[i],s2.insert(b[i]);
        while(s1.size())
        {
            
            auto i1 = *s1.begin();
            auto i2 = *s2.begin();
            if(i1==i2)
            {
                s1.erase(s1.begin());
                s2.erase(s2.begin());
                continue;
            }
             ans++;
            if(i1>i2)
            {
                s1.erase(s1.begin());
                s1.insert(to_string(i1).size());
            }
            else
            {
                s2.erase(s2.begin());
                s2.insert(to_string(i2).size());
            }
        }
        cout<<ans<<"\n";
    }    
}
