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


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
  

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll> m;
        // for(ll i=0;i<n;i++) cin>>v[i];
        ordered_multiset<ll> s;
        for(ll i=1;i<=n;i++)
        {   
             cin>>v[i];
            m[v[i]]++;
            // cout<<i<<" "<<ans<<"\n";
            ans+=s.size() - s.order_of_key(v[i]);
            s.insert(v[i]);
        }
        cout<<ans<<"\n";
    }   
}