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
        ll n,ca=0,cb=0;
        string s;
        cin>>n>>s;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='a') ca++;
            else cb++;
            a[i]=ca;
            b[i]=cb;
        }
        ll f=0;
        for(ll i=1;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(a[j]-a[i-1]==b[j]-b[i-1])
                {
                    cout<<i+1<<" "<<j+1<<"\n";
                    f=1;
                    break;
                }
            }
            if(f) break;
            if(a[i]==b[i])
            {
                cout<<1<<" "<<i+1<<"\n";
                f=1;
                break;  
            }
        }
        if(!f) cout<<"-1 -1\n";
    }      
}