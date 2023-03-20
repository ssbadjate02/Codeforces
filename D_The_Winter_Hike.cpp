#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t;
    cin>>t;
   
    while(t--)
    {
        ll n,c=0,l=0,ans=0,x=0;
        cin>>n;
        vector<ll> v(n),b;
        for(ll i=0;i<n;i++)
            cin>>v[i];
        
        for(ll i=0;i<n;i++)
        {
            if((ll)sqrt(v[i])==sqrt(v[i])) b.pb(i);
        }
        vector<ll> co(n);
        co[0]=(b[0]==0);
        // co[1]=(b[1])
        // for(ll i=0;i<b.size();i++) cout<<b[i]<<" ";
        cout<<co[0]<<" ";
        ll j=-1;
        if(b[0]==0) j=0; 
        for(ll i=1;i<n;i++)
        {
            if((ll)sqrt(v[i])==sqrt(v[i]))
            {
                if(j==-1) co[i]=i+1;
                else 
                {
                    if(b[j]!=0) co[i]=co[b[j]-1]+i-b[j];
                    else co[i]=i-b[j];
                }
                j++;
            }
            else co[i]=co[i-1];
            cout<<co[i]<<" ";
        }
        cout<<"\n";
        for(ll i=0;i<n;i++) ans+=co[i];
        cout<<ans<<"\n";
    }   
}