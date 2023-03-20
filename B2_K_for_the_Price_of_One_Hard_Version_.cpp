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
        ll n,p,k;
        cin>>n>>p>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll summ=0,ans=0,ps=0,maxx=0;
        for(ll i=0;i<=k;i++)
        {
            summ=ps;
            ans=i;
            if(summ>p) break;
            for(ll j=i+k-1;j<n;j+=k)
            {
                if(summ+v[j]<=p)
                {
                    ans+=k;
                    summ+=v[j];
                }
                else break;
            }
            ps+=v[i];
            maxx=max(maxx,ans);
        }
        cout<<maxx<<"\n";
    }   
}
// 6 
// 1 1 2 2 2