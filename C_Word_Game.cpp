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

map<string,ll>m;
ll func(vector<string> a)
{
    ll ans=0;
    for(ll i=0;i<a.size();i++)
    {
        if(m[a[i]]==1) ans+=3;
        else if(m[a[i]]==2) ans++;
    }
    return ans;
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
        m.clear();
        vector<string>a(n),b(n),c(n);
        for(ll i=0;i<n;i++) cin>>a[i],m[a[i]]++;;
        for(ll i=0;i<n;i++) cin>>b[i],m[b[i]]++;
        for(ll i=0;i<n;i++) cin>>c[i],m[c[i]]++;
        cout<<func(a)<<" "<<func(b)<<" "<<func(c)<<"\n";
    }   
}