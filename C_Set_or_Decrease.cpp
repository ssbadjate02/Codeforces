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
        ll n,k,sum=0,ans=0;
        cin>>n>>k;
        vector<ll> v(n);
        multiset<ll,greater<ll>> s;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            s.insert(v[i]);
            sum+=v[i];
        }    
        // sort(v.begin(),v.end(),greater<ll>());
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(sum<=k) break;
            if(*(s.rbegin())<=k/n)
            {
                sum-=(*it-*s.rbegin());
                s.erase(it);
                s.insert(*(s.rbegin()));
                ans++;
            }
            else
            {
                auto e = s.end();
                e--;
                sum-=(*e-k/n);
                ans+=(*e-k/n);
                s.erase(e);
                s.insert(k/n);   
            }
        }
        cout<<ans<<"\n";
    }   
}