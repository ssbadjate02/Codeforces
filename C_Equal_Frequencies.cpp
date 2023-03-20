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
        ll n,minans=1e9,nl;
        string s,sans;
        cin>>n>>s;
        vector<pair<ll,ll>> v(26);
        vector<vector<ll>> pos(26);
        for(ll i=0;i<26;i++) v[i] = {0,i};
        for(ll i=0;i<n;i++) v[s[i]-'a'].first++,pos[s[i]-'a'].pb(i);
        sort(all(v),greater<pair<ll,ll>>());
        for(ll i=1;i<=n;i++)
        {
            ll ans = 0;
            if(n%i || n/i>26) continue;
            for(ll j=0;j<n/i;j++) ans+=abs(v[j].first-i);
            for(ll j = n/i;j<26;j++) ans+=abs(v[j].first);
            ans/=2;
            if(ans<minans)
            {
                minans = ans;
                nl = n/i;
            }
        }
        // cout<<char(v[0].second+'a')<<" ";
        for(ll i=0;i<nl;i++)
        {
            if(v[i].first>=n/nl) continue;
            for(ll j=0;j<n;j++)
            {
                if(v[i].first>=n/nl) break;
                if(s[j]==v[i].second+'a') continue;
                ll f=-1;
                for(ll k=0;k<nl;k++) if(v[k].second+'a'==s[j]) f = k;
                if(f==-1 && v[i].first<n/nl)
                {
                    v[i].first++;
                    s[j] = v[i].second+'a';
                }
                if(f!=-1 && v[f].first>n/nl) 
                {
                    v[f].first--;
                    s[j] = v[i].second+'a';
                    v[i].first++;
                }
            }
            // cout<<char(v[i].second+'a')<<" "<<s<<"\n";
        }
        cout<<minans<<"\n"<<s<<"\n";
    }   
}