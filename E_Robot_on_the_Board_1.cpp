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
        string s;
        cin>>s;
        ll maxu=n,maxd=1,maxl=m,maxr=1,d=0,r=0,ansd=1,ansr=1;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='R') r++;
            else if(s[i]=='L') r--;
            else if(s[i]=='D') d++;
            else d--;
            if(d<0) maxd=max(maxd,1-d);
            else maxu=min(maxu,n-d);
            if(r<0) maxr=max(maxr,1-r);
            else maxl=min(maxl,m-r);
            // cout<<d<<" ";
            if(maxu<maxd || maxl<maxr) break;   
            ansd=maxd;
            ansr=maxr;
        }
        // cout<<"\n";
        
        cout<<ansd<<" "<<ansr<<"\n";
    }   
}