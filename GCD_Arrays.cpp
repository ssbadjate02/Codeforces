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
        ll l,r,k,n;
        cin>>l>>r>>k;
        if(l==r && r!=1)
        {
            cout<<"YES\n";
            continue;
        }
        else if(l==r && r==1) 
        {
            cout<<"NO\n";
            continue;
        }
        if((r-l)%2==0)
        {
            if(r%2==1) n=(r-l+2)/2;
            else n=(r-l)/2;
        }
        else n=(r-l+1)/2;
        if(n>k) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}