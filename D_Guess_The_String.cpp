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

ll query(ll l, ll r)
{
    cout<<"? 2 "<<l+1<<" "<<r+1<<endl;
    ll x;
    cin>>x;
    return x;
}

int main()
{
    FASTIO;
    ll n;
    cin>>n;
    string s="";
    vector<ll> known;
    for(ll i=0;i<n;i++)
    {
        sort(all(known));
        ll l = 0,r=known.size()-1,a=-1;
        while(r>=l)
        {
            ll m = (l+r)/2;
            ll x = query(known[m],i);
            if(x+m==(ll)known.size())
            {
                a=m;
                l=m+1;
            }
            else r=m-1;
        }
        if(a==-1)
        {
            cout<<"? 1 "<<i+1<<endl;
            char t;
            cin>>t;
            s+=t;
            known.pb(i);
        }
        else 
        {
            s+=s[known[a]];
        }
    }
    cout<<"! "<<s;
}