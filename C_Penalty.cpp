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
        string in,a="",b="";
        cin>>in;
        for(ll i=0;i<in.size();i++)
        {
            if(i%2==0) a+=in[i];
            else b+=in[i];
        }
        ll sa=0,sb=0,ans1=1e9+7,ans2=1e9+7;
        ll j=1;
        // cout<<a<<"\n"<<b<<"\n";
        for(ll i=0;i<5;i++)
        {
            if(a[i]=='1' || a[i]=='?') sa++;
            if(sa>sb && sa-sb-(10-j+1)/2>0)
            {
                ans1=min(ans1,j);
                break;
            }
            j++;
            if(b[i]=='1') sb++;
            if(sa>sb && sa-sb-(10-j)/2>0)
            {
                ans1=min(ans1,j);
                break;
            }
            j++;
        }
        // cout<<ans<<"\n";
        j=1;
        sa=0,sb=0;
        for(ll i=0;i<5;i++)
        {
            if(a[i]=='1') sa++;
            if(sb>sa && sb-sa-(10-j)/2>0)
            {
                ans2=min(ans2,j);
                break;
            }
            j++;
            if(b[i]=='1' || b[i]=='?') sb++;
            if(sb>sa && sb-sa-(10-j)/2>0)
            {
                ans2=min(ans2,j);
                break;
            }
            j++;
        }
        j=min(ans1,ans2);
        if(j>10) cout<<10<<"\n";
        else cout<<j<<"\n";
    }
}