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
        ll n,k;
        cin>>n>>k;
        ll i=0,j=0,x=1;
        vector<vector<ll>> v(n,vector<ll>(n));
        if(n==1 && k==0)
        {
            cout<<"0\n0\n";
            continue;
        }
        if(n==1 && k==1)
        {
            cout<<"0\n1\n";
            continue;
        }
        if(k!=0)
        {
            while(1)
            {
                v[i][j]=1;
                i++;
                j++;
                k--;
                if(j==n) i=0,j=x,x++;
                if(x==n) break;
                if(k==0) break;
            }
        }
        if(k) v[n-1][0]=1,k--;
        if(k!=0)
        {
            i=1,j=0,x=2;
            while(1)
            {
                v[i][j]=1;
                i++;
                j++;
                k--;
                if(i==n)
                {
                    i=x;
                    j=0;
                    x++;
                }
                if(x==n) break;
                if(k==0) break;
            }
        }
        if(k) v[0][n-1]=1,k--;
        ll maxrsum=0,minrsum=1e15,maxcsum=0,mincsum=1e15;
        for(ll i=0;i<n;i++)
        {
            ll s=0;
            for(ll j=0;j<n;j++)
            {
                s+=v[i][j];
            }
            maxrsum=max(maxrsum,s);
            minrsum=min(minrsum,s);
        }
        for(ll j=0;j<n;j++)
        {
            ll s=0;
            for(ll i=0;i<n;i++)
            {
                s+=v[i][j];
            }
            maxcsum=max(maxcsum,s);
            mincsum=min(mincsum,s);
        }
        ll ans=(maxrsum-minrsum)*(maxrsum-minrsum)+(maxcsum-mincsum)*(maxcsum-mincsum);
        cout<<ans<<"\n";
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++) cout<<v[i][j];
            cout<<"\n";
        }
        // cout<<"\n";
    }
}