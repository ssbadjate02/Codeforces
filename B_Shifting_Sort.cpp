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
        ll n;
        cin>>n;
        vector<ll> v(n),a;
        for(ll i=0;i<n;i++) cin>>v[i];
        a=v;
        sort(a.begin(),a.end());
        vector<vector<ll>> ans;
        for(ll i=0;i<n;i++)
        {
            ll j=i;
            for(j=i;j<n;j++)
            {
                if(v[j]==a[i]) break;
            }
            ans.pb({i,j,j-i});
            ll shift=i-j+1;
            vector<ll> temp=v;
            for(ll k=j-1;k>=i;k--) temp[k+1]=temp[k];
            temp[i]=v[j];
            v=temp;
        }
        ll u=0;
        for(ll i=0;i<ans.size();i++)
        {
            if(ans[i][2]!=0)
            {
                u++;
            }
        }
        cout<<u<<"\n";
        for(ll i=0;i<ans.size();i++)
        {
            if(ans[i][2]!=0)
            {
                cout<<ans[i][0]+1<<" "<<ans[i][1]+1<<" "<<ans[i][2]<<"\n";
            }
        }
    }   
}