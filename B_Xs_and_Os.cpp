#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
// #define N 2e5+7
const ll inf = 1e12;

int main()
{
    FASTIO;
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        ll n;
        cin>>n;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        set<set<pair<ll,ll>>> s;
        ll minn=inf,ans=0;
        for(ll i=0;i<n;i++)
        {
            ll f=0,x=0;
            
            for(ll j=0;j<n;j++)
            {
                if(v[i][j]=='O') f=1;
                if(v[i][j]=='.') x++;
            }
            if(!f) minn=min(minn,x);
        }
        for(ll j=0;j<n;j++)
        {
            ll f=0,x=0;
            for(ll i=0;i<n;i++)
            {
                if(v[i][j]=='O') f=1;
                if(v[i][j]=='.') x++;
            }
            if(!f) minn=min(minn,x);
        }
        for(ll i=0;i<n;i++)
        {
            ll f=0,x=0;
            set<pair<ll,ll>> temp;
            for(ll j=0;j<n;j++)
            {
                if(v[i][j]=='O') f=1;
                if(v[i][j]=='.') x++,temp.insert({i,j});
            }
            if(!f && x==minn) s.insert(temp); 
        }
        for(ll j=0;j<n;j++)
        {
            ll f=0,x=0;
            set<pair<ll,ll>> temp;
            for(ll i=0;i<n;i++)
            {
                if(v[i][j]=='O') f=1;
                if(v[i][j]=='.') x++,temp.insert({i,j});
            }
            if(!f && x==minn) s.insert(temp);
        }
        cout<<"Case #"<<x<<": ";
        if(minn>=inf) cout<<"Impossible\n";
        else cout<<minn<<" "<<s.size()<<"\n";
    }   
}