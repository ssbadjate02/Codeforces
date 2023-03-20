#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const ll inf=1e12;

int main()
{
    FASTIO;
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        x++;
        string s;
        ll k;
        cin>>s>>k;
        vector<vector<ll>> adj(26);
        vector<vector<ll>> mind(26,vector<ll>(26,inf));
        for(ll i=0;i<26;i++) mind[i][i]=0;
        for(ll i=0;i<k;i++)
        {
            char a,b;
            cin>>a>>b;
            adj[a-'A'].pb(b-'A');
            mind[a-'A'][b-'A']=1;
            // cout<<a<<" "<<b<<"\n"; 
        }
        for(ll k=0;k<26;k++)
        {
            for(ll i=0;i<26;i++)
            {
                for(ll j=0;j<26;j++)
                {
                    if(mind[i][j]>mind[i][k]+mind[k][j])
                    {
                        mind[i][j]=mind[i][k]+mind[k][j];
                    }
                }
            }
        }
        ll minans=inf,ans;
        for(char i='A';i<='Z';i++)
        {
            ans=0;
            for(auto j:s)
            {
                ans+=mind[j-'A'][i-'A']; 
            }
            minans=min(minans,ans);
        }
        cout<<"Case #"<<x<<": ";
        if(minans>=inf) cout<<"-1\n";
        else cout<<minans<<"\n";
    }   
}