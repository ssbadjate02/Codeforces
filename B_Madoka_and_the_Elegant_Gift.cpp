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
        ll n,m,c=0,f=0;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=0;j<m-1;j++)
            {
                c=0;
                c+=v[i][j]=='1';
                c+=v[i+1][j]=='1';
                c+=v[i][j+1]=='1';
                c+=v[i+1][j+1]=='1';
                if(c==3) f=1;
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}