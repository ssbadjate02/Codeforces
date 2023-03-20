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
// 1500 1900 2000
int main()
{
    FASTIO;
    ll t,tt;
    cin>>t;
    tt = t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        multiset<ll> s;
        for(ll i=0;i<n;i++) cin>>v[i],s.insert(v[i]);
        cout<<"Case #"<<tt-t<<": ";
        for(int i=0;i<n;i++)
        {
            auto it = s.upper_bound(2*v[i]);
            if(it==s.begin()) 
            {
                cout<<"-1 ";
                continue;
            }
            it--;
            if(*it==v[i] && s.count(v[i])==1)
            {
                if(it==s.begin()) 
                {
                    cout<<"-1 ";
                    continue;
                }
                it--;
            }
            cout<<*it<<" "; 
        }
        cout<<"\n";
    }   
}