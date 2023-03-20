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
        ll n,x,ans=0;
        cin>>n;
        vector<ll> v(n),mark(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        cin>>x;
        for(ll i=0;i<n;i++) mark[i]=(v[i]>=x);
        for(ll i=0;i<n;i++)
        {
            if(mark[i] || mark[i]==-1) continue;

            ll sum=v[i],j=i+1,f=0;
            for(ll j=i+1;j<n;j++)
            {
                sum+=v[j];
                if(sum<(j-i+1)*x)
                {
                    mark[i]=1;
                    mark[j]=-1;
                    break;
                }
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(mark[i]==0)
            {
                ll j = i-1,sum=v[i];
                while(j>=0)
                {
                    sum+=v[j];
                    if(mark[j]==-1)
                    {
                        mark[i]=1;
                        break;
                    }
                    if(sum<(i-j+1)*x) 
                    {
                        mark[i]=-1;
                        break;
                    }
                    j--;
                }
                if(j<0) mark[i]=1;
            }
        }
        for(ll i=0;i<n;i++) 
        {
            ans+=(mark[i]==1);
            // cout<<mark[i]<<" ";
        }
        // cout<<"\n";
        cout<<ans<<"\n";
    }   
}