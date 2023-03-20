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
    vector<ll> v(60);
    v[1]=0;
    v[2]=1;
    v[3] = 2;
    for(ll i=4;i<=55;i++)
    {
        v[i] = v[i/2] + v[i-i/2]+1;
    }
    while(t--)
    {
        ll n,summ=0;
        cin>>n;
        set<ll,greater<ll>> s;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            summ+=v[a];
        }
        // ll i=(ll)log2(summ+1)/2);
        // cout<<summ<<"\n";
        if(summ%2) cout<<"errorgorn\n";
        else cout<<"maomao90\n";
    }   
}