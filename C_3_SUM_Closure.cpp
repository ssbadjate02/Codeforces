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
        vector<ll> v(n),a;
        map<ll,ll> m;
        ll f=0,c0=0,cp=0,cn=0;
        for(ll i=0;i<n;i++) 
        {
            cin>>v[i];
            c0+=(v[i]==0);
            cp+=(v[i]>0);   
            cn+=(v[i]<0);
            m[v[i]]++;
        }
        if(cp>=3 || cn>=3)
        {
            cout<<"NO\n";
            continue;
        }
        if(c0) a.push_back(0);
        for(ll i=0;i<n;i++) if(v[i]!=0) a.pb(v[i]);
        n = a.size();
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                for(ll k=j+1;k<n;k++)
                {
                    if(m.find(a[i]+a[j]+a[k])==m.end()) f=1;
                }
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }    
}
/*
-3 -1 0 1 3 
ai+aj+ak = al
-1 -2 0 0 2 1 
*/
