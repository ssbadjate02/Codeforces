#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N=1e7+1;
 
vector<ll> p(N);
void sieve()
{
    p[1] = 1;
    for (ll i=2; i<N; i++)
        p[i] = i;
    for (ll i=4; i<N; i+=2)
        p[i] = 2;
 
    for (ll i=3; i*i<N; i++)
    {
        if (p[i] == i)
        {
            for (ll j=i*i; j<N; j+=i)
                if (p[j]==j)
                    p[j] = i;
        }
    }
}
int main()
{
    FASTIO;
    ll t;
    cin>>t;
    sieve();
    while(t--)
    {
        ll x,a,b,c;
        cin>>x>>a>>b>>c; 
        vector<ll> v;
        ll temp=x;
        while (temp!=1)
        {
            v.push_back(p[temp]);
            temp=temp/p[temp];
        }
        // for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
        // cout<<"\n";
        ll ans=1e9+7;
        if(v[v.size()-1]!=x)ans=a+x/(v[v.size()-1]);
        else ans=N;
        // cout<<ans<<" "<<b+p[x]<<" "<<c+x<<"\n";
        ans=min({ans,b+v[0]+((p[x/v[0]]==x/v[0]))*N,c+x});
        // cout<<"1\n";
        cout<<ans<<"\n";
    }   
}