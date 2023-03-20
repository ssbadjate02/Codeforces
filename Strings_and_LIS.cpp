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
        ll n,q;
        cin>>n>>q;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<vector<ll>> best(26,vector<ll>(26));
        for(auto s:v)
        {
            for(ll i=0;i<26;i++)
            {
                for(ll j=i;j<26;j++)
                {
                    multiset<char> temp;
                    for(int l=0;l<s.size();l++)
                    {
                        if(s[l]>=i+'a' && s[l]<=j+'a')
                        {
                            auto it = temp.upper_bound(s[l]);
                            if(it==temp.end()) temp.insert(s[l]);
                            else 
                            {
                                temp.erase(it);
                                temp.insert(s[l]);
                            }
                        }
                    }
                    best[i][j] = max(best[i][j],(ll)temp.size());
                }
            }
        }
        vector<vector<ll>> pref(26,vector<ll>(27)),suff(26,vector<ll>(27));
        for(ll i=0;i<26;i++)
        {
            pref[i][1] = max(best[0][i],pref[i][1]);
            for(ll j=0;j<=i;j++)
            {
                for(ll l=0;l<26;l++)
                {
                    pref[i][l+1] = max(pref[i][l+1],pref[j][l]+best[j][i]);
                }
            }
        }
        for(ll i=25;i>=0;i--)
        {
            suff[i][1] = max(suff[i][1],best[i][25]);
            for(ll j=i;j<26;j++)
            {
                for(ll l=0;l<26;l++)
                {
                    suff[i][l+1] = max(suff[i][l+1],suff[j][l] + best[j][i]);
                }
            }
        }   
        ll ans = 0;
        for(ll i=0;i<26;i++)
        {
            for(ll l=0;l<=min(q,(ll)26);l++)
            {
                for(ll r=0;r<=min(q-l,26ll);r++)
                {
                    ans = max(ans,pref[i][l] + (q-l-r)*(best[i][i]) + suff[i][r]);
                }
            }
        }
        cout<<ans<<"\n";
    }   
}