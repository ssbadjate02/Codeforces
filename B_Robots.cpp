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
        ll n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll i1=-1,j1,i2=-1,j2;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) 
            {
                // cout<<v[i][j]<<"\n";
                if(v[i][j]=='R') 
                {
                    i1=i;
                    j1=j;
                    break;
                }
            }
            if(i1!=-1) break;

        }
        for(ll j=0;j<m;j++)
        {
            for(ll i=0;i<n;i++) 
            {
                if(v[i][j]=='R') 
                {
                    i2=i;
                    j2=j;
                    break;
                }
            }
            if(i2!=-1) break;
        }
        // for(ll i=0;i<n;i++) cout<<v[i]<<"\n";
        // cout<<i1<<" "<<i2<<"\n"<<j1<<" "<<j2<<"\n";
        if(i1==i2 && j1==j2) cout<<"YES\n";
        else cout<<"NO\n";   
    }   
}