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
        string s;
        cin>>n>>s;
        vector<vector<ll>> v(3);
        vector<vector<char>> ans(n,vector<char>(n,'='));
        for(ll i=0;i<n;i++)
        {
            v[s[i]-'0'].pb(i);
        }
        if(v[2].size()==1 || v[2].size()==2)
        {
            cout<<"NO\n";
            continue;
        }
        // for(ll i=0;i<v[2].size();i++)
        // {
        //     cout<<v[2][i]<<" ";
        // }
        // cout<<"\n";
        for(ll i=0;i<v[2].size();i++)
        {
            if(i+1==v[2].size()) continue;
            ans[v[2][i]][v[2][i+1]]='+';
            ans[v[2][i+1]][v[2][i]]='-';
        }
        if(v[2].size()>1)
        {
            ans[v[2][v[2].size()-1]][v[2][0]]='+';
            ans[v[2][0]][v[2][v[2].size()-1]]='-';
        }
        cout<<"YES\n";
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(i!=j)cout<<ans[i][j];
                else cout<<"X";
            }
            cout<<"\n";
        }
    }   
}