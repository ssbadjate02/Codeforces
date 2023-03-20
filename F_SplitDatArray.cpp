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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll s1=0,s3=0,ans=0;
    ll i=-1,j=n;
    while(i<j)
    {
        if(s1<s3)
        {
            i++;
            s1+=v[i];
        }
        else if(s1>s3)
        {
            j--;
            s3+=v[j];
        }
        else
        {
            i++;
            j--;
            ans=max(s1,ans);
            s1+=v[i];
            s3+=v[j];
            
        }
    }
    cout<<ans<<"\n";
}