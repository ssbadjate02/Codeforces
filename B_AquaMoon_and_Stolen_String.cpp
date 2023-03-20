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
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>> v1(m,vector<ll>(26)),v2(m,vector<ll>(26));
        vector<string> s1(n),s2(n-1),s3;
        for(ll i=0;i<n;i++) cin>>s1[i];
        for(ll i=0;i<n-1;i++) cin>>s2[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++) v1[j][s1[i][j]-'a']++;
        }
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=0;j<m;j++) v2[j][s2[i][j]-'a']++;
        }
        for(ll i=0;i<n;i++)
        {
            vector<vector<ll>> temp;
            temp=v1;
            for(ll j=0;j<m;j++)
            {
                temp[j][s1[i][j]-'a']--;
            }
            if(temp==v2)
            {
                // printf("%s", s1[i]);
                cout<<s1[i]<<"\n";
                // s3.pb(s1[i]);
                fflush(stdout);
                break;
            }
        }
    }   
}