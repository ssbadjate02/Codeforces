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
        ll n,s=0,f=0;
        cin>>n;
        vector<ll> a(n),b(n),sa(n+1),sb(n+1);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll j=0;j<n;j++) cin>>b[j];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sa[0]=0;
        sb[0]=0;    
        for(ll i=1;i<=n;i++)
        {
            s+=a[i-1];
            sa[i]=s;
        }
        s=0;
        for(ll i=1;i<=n;i++)
        {
            s+=b[i-1];
            sb[i]=s;
        }
        //    if(sa[n]>=sb[n])
        // {
        //     cout<<"0\n";
        //     continue;
        // }
        for(ll i=0;i<=3*n;i++)
        {
            ll x=floor((double)(n+i)/(double)4),y;
            if(x>=i) y=sb[x];
            else y=0;
            if(sa[n]-sa[x]+i*100>=sb[n]-y)
            {
                cout<<i<<"\n";
                f=1;
                break;
            }
        }
    }   
}