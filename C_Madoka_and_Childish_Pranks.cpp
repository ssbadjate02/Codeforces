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
        if(v[0][0]=='1')
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<vector<ll>> ans;
        vector<vector<ll>> final(n,vector<ll>(m));
        for(ll j=m-1;j>0;j--)
        {
            for(ll i=0;i<n;i++) 
            {
                if(v[i][j]=='1')
                {
                    ans.pb({i,j-1,i,j});
                    final[i][j-1]==0;
                    final[i][j]=1;
                }
            }
        }
        for(ll i=n-1;i>0;i--)
        {
            if(v[i][0]=='1')
            {
                ans.pb({i-1,0,i,0});
                final[i-1][0]==0;
                final[i][0]=1;
            }
        }
        cout<<ans.size()<<"\n";
        for(ll i=0;i<ans.size();i++)
        {
            for(ll j=0;j<4;j++) cout<<ans[i][j]+1<<" ";
            cout<<"\n";
        }
    }
}