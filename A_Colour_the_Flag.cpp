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
        ll n,m,f1=1,f2=1;
        cin>>n>>m;
        map<ll,char> mp;
        mp[0]='W';
        mp[1]='R'; 
        vector<vector<ll>> v(n,vector<ll>(m));
        for(ll i=0;i<n;i++) 
        {
            for(ll j=0;j<m;j++)
            {

                char a;
                cin>>a;
                if(a=='W') v[i][j]=0;
                else if(a=='R') v[i][j]=1;
                else v[i][j]=2;
            }
        }
        ll g=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]==2)
                {
                    v[i][j]=g;
                }
                else
                {
                    if(v[i][j]!=g)
                    {
                        f1=0;
                        if(!f1) break;
                    }
                }
                g=!g;
            }
            g=!g;
            if(!f1) break;
        }
        g=1;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(v[i][j]==2)
                {
                    v[i][j]=g;
                }
                else
                {
                    if(v[i][j]!=g)
                    {
                        f2=0;
                        break;
                    }
                }
                g=!g;
            }
            g=!g;
            if(!f2) break;
        }
        if(!f1 && !f2)
        {
            cout<<"NO\n";
            // for(ll i=0;i<n;i++)
            // {
            //     for(ll j=0;j<m;j++)
            //     {
            //         cout<<mp[v[i][j]];
            //     }
            // cout<<"\n";
            // }
        }
        else cout<<"YES\n";
    }   
}