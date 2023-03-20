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

const int N = 1e9+7; 


int main()
{
    FASTIO;
    ll t;
    cin>>t;
  
    while(t--)
    {
        ll n,i0,i1;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            if(v[i]==0) i0=i;
            if(v[i]==1) i1=i;
        }
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        if(i0>i1) swap(i0,i1);
        vector<ll> a;
        for(ll i=i0;i<=i1;i++) a.pb(v[i]);
        sort(all(a));
        ll x=-1;
        for(ll i=0;i<a.size();i++)
        {
            if(a[i]!=i) 
            {
                x=i;
                break;
            }
            // cout<<a[i]<<" ";
        }
        if(x==-1) x = a.size();
        // cout<<"\n";
        // cout<<x<<"x\n";
        ll len = i1-i0+1;
        ll places = len -2;
        ll items = n-x-1;
        ll ic = len-x; 
        // ans = itemsC(ic) * places! 
        ll ans=1;
        // cout<<len<<" "<<places<<" "<<items<<" "<<ic<<"\n";
        for(int i=items;i>items - ic;i--) ans*=i, ans%=N;
        for(int i=places;i>ic;i--) ans*=i,ans%=N;
        ans%=N;
        cout<<ans<<"\n";
    } 
}
/*
3c0*3! + 3c1 * 2! + 3c2 *2! + 3c3*3!
6 +6 +6+6
(n-x-1)! * (len-2)! / (len-x)! * (n-len+1)!
items!*places!/ic! * (items-ic)!
*/
