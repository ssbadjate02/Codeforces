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
        ll n,k;
        cin>>n>>k;
        if(k==n-1 && n==4)
        {
            cout<<"-1\n";
            continue;
        }
        else if(k==n-1)
        {
            cout<<n-1<<" "<<n-1-n/4<<"\n";
            cout<<n/4<<" "<<n/2+n/4<<"\n";
            cout<<0<<" "<<n-1-n/2-n/4<<"\n";
            for(ll i=1;i<n/2;i++)
            {
                if(i==n/4 || i==n-1-n/2-n/4) continue;
                cout<<i<<" "<<n-i-1<<"\n";
            }
        }
        else
        {
            cout<<n-1<<" "<<k<<"\n";
            if(k!=0)cout<<0<<" "<<n-k-1<<"\n";
            for(ll i=1;i<n/2;i++)
            {
                if(i==k || i==n-1 || i == n-k-1) continue;
                cout<<i<<" "<<n-i-1<<"\n";
            }
        }
        
        // cout<<"\n";
    }
}