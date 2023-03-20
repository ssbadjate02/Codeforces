#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,f=0,ans;
        cin>>n>>x;
        if(n==x)
        {
            cout<<n<<"\n";
            continue;
        }
        for(ll i=63;i>=0;i--)
        {
            if(!(n>>i & 1LL) && (x>>i & 1LL))
            {
                cout<<"-1\n";
                f=1;
                break;
            }
        }
        if(f) continue;
        for(ll i=63;i>=0;i--)
        {
            if((n>>i & 1LL) && !(x>>i & 1LL))
            {
                ans = (1LL<<i) + n - (((1LL<<i)-1LL)&n);
                // cout<<i<<"\n";
                break;
            }
        }
        for(ll i=0;i<=63;i++)
        {
            if(x>>i & 1LL)
            {
                ll temp = (1LL<<i) + n - (((1LL<<i)-1LL)&n);
                if(ans>=temp)
                {
                    // cout<<ans<<" "<<temp<<"\n";
                    cout<<"-1\n";
                    f=1;
                    break;
                }
            }
        }
        if(!f) cout<<ans<<"\n";

    }   
}
/*
1010
1010
*/