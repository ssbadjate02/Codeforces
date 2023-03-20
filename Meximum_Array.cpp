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
        cin>>n;
        vector<ll> v(n),smex(n+1);
        for(ll i=0;i<n;i++) cin>>v[i];
        set<ll> s;
        ll mex=0;
        smex[n]=0;
        for(ll i=n-1;i>=0;i--)
        {
            s.insert(v[i]);
            for(ll j=mex;;j++)
            {
                if(s.find(j)==s.end()) 
                {
                    mex=j;
                    break;
                }
            }
            smex[i]=mex;
        }
        vector<ll> ans;
        s.clear();
        ll mex1=0,l=0;
        for(ll i=0;i<n;i++)
        {
            s.insert(v[i]);
            for(ll j=mex1;;j++)
            {
                if(s.find(j)==s.end()) 
                {
                    mex1=j;
                    break;
                }
            }
            if(mex1==smex[l])
            {
                ans.pb(mex1);
                mex1=0;
                l=i+1;
                s.clear();
            }
        }

        cout<<ans.size()<<"\n";
        for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }   
}