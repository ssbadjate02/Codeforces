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
        ll k,n,m,f=0;
        cin>>k>>n>>m;
        vector<ll> a(n),b(m),v;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll j=0;j<m;j++) cin>>b[j];
        ll i=0,j=0;
        while(i<n && j<m)
        {

            if(a[i]==0)
            {
                v.pb(0);
                k++;
                i++;
            }
            else if(b[j]==0)
            {
                v.pb(0);
                k++;
                j++;
            }
            else
            {
                if(a[i]<b[j])
                {
                    if(a[i]<=k) v.pb(a[i]),i++;
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(b[j]<=k) v.pb(b[j]),j++;
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(i<n)
        {
            for(ll l=i;l<n;l++)
            {
                if(a[l]==0)
                {
                    v.pb(0);
                    k++;
                }
                else
                {
                    if(a[l]<=k) v.pb(a[l]);
                    else 
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
         if(j<m)
        {
            for(ll l=j;l<m;l++)
            {
                if(b[l]==0)
                {
                    v.pb(0);
                    k++;
                }
                else
                {
                    if(b[l]<=k) v.pb(b[l]);
                    else 
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f) cout<<"-1\n";
        else
        {
            for(ll l=0;l<v.size();l++) cout<<v[l]<<" ";
            cout<<"\n";
        }
    }   
}