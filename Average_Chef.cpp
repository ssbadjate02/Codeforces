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
        ll n,k,c=1;
        cin>>n>>k;
        vector<ll> v(n);
        ll avg = 1e6;
        for(ll i=0;i<k-1;i++)
        {
            for(ll j=i;j<n;j+=k) v[j] = c++;
        }  
        ll summ=0;
        for(ll i=0;i<n;i++)
        {
            summ+=v[i];
            if((i%k)==(k-1))
            {
                v[i] = k*avg - summ;
                summ=0;
            }
        }
        for(ll i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<"\n";
    }   
}