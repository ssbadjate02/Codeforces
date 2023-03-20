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
        ll n,c=0,nof=0;
        cin>>n;
        vector<ll> a(n),b(n),aless,bless,ans1,ans2;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++)
        {
            c+=(a[i]-b[i]);
        }
        if(c!=0)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]<b[i]) aless.pb(i);
            else if(a[i]>b[i]) bless.pb(i);
        }
        ll i=0,j=0;;
        while(i<aless.size())
        {
            // cout<<bless[j]+1<<" "<<aless[i]+1<<"\n";
            nof++;
            ans1.pb(bless[j]);
            ans2.pb(aless[i]);
            a[aless[i]]++;
            a[bless[j]]--;
            if(a[aless[i]]==b[aless[i]]) i++;
            if(a[bless[j]]==b[bless[j]]) j++;
        }
        cout<<nof<<"\n";
        for(ll i=0;i<nof;i++)
        {
            cout<<ans1[i]+1<<" "<<ans2[i]+1<<"\n";
        }
    }   
}