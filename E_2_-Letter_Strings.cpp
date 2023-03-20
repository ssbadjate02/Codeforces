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
        ll n;
        cin>>n;
        vector<string> v(n);
        vector<vector<string>> x('k'-'a'+1);
        for(ll i=0;i<n;i++)
        {
            string s;
            cin>>s;
            sort(all(s));
            v[i]=s;
        }

        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            for(auto s:x[v[i][0]-'a'])
            {
                if(s!=v[i]) ans++;
            }
            if(v[i][0]!=v[i][1])
           { for(auto s:x[v[i][1]-'a'])
            {
                if(s!=v[i]) ans++;
            }}
            x[v[i][0]-'a'].pb(v[i]);
            if(v[i][0]!=v[i][1])x[v[i][1]-'a'].pb(v[i]);
        }
        cout<<ans<<"\n";
    }   
}

