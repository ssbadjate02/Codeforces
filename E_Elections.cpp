#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll n,m,minans=1e9+9,mini;
bool comp( const vector<ll>& v1,const vector<ll>& v2 )
{
    return v1[n] > v2[n];
}

int main()
{
    FASTIO;
    cin>>n>>m;
    vector<vector<ll>> v(m,vector<ll>(n));
    vector<ll> sum(n);
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++) cin>>v[i][j];
    }
    for(ll j=0;j<n;j++)
    {
        for(ll i=0;i<m;i++) sum[j]+=v[i][j];
    }
    for(ll i=0;i<n-1;i++)
    {
        ll ans=0;
       vector<vector<ll>> temp=v;
       for(ll j=0;j<m;j++)
       {
           temp[j].pb(temp[j][n-1]-temp[j][i]);
       }
       sort(temp.begin(),temp.end(),comp);
       ll si=sum[i],sn=sum[n-1];
       ll j=0;
    //    for(ll i=0;i<m;i++)
    //    {
    //        for(ll j=0;j<n;j++) cout<<temp[i][j]<<" ";
    //        cout<<"\n";
    //    }
    //    cout<<"\n\n";
       while(si<sn && j<m)
       {
           sn-=temp[j][n-1];
           si-=temp[j][i];
           j++;
           ans++;
       }    
       if(minans>ans)
       {
           minans=ans;
           mini=i;
       }
    }
    cout<<minans<<"\n";
    for(ll j=0;j<m;j++)
    {
        v[j].pb(v[j][n-1]-v[j][mini]);
        v[j].pb(j);
    }
    sort(v.begin(),v.end(),comp);
    ll j=0;
    while(sum[mini]<sum[n-1] && j<m)
    {
        sum[n-1]-=v[j][n-1];
        sum[mini]-=v[j][mini];
        cout<<v[j][n+1]+1<<" ";
        j++;
    } 
}