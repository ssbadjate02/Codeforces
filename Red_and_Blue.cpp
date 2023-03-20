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

ll n;
string s;

ll minJumps(vector<ll>v, ll n)
{
 
    if (n <= 1)
        return 0;

    if (v[0] == 0)
        return -1;
 

    ll maxReach = v[0];

    ll step = v[0];

    ll jump = 1;
    
    ll i = 1;
    for (i = 1; i < n; i++) {
        if (i >= n - 1)
            return jump;
 
 
        maxReach = max(maxReach, i + v[i]);
 
        step--;
 

        if (step == 0) {
            jump++;

            if (i >= maxReach)
                return -1;

            step = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        vector<ll> d(n);
        for(ll i=0;i<n;i++) cin>>d[i];
    
        ll f=0;
        ll maxj=-1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='R' || i<=maxj)
            {
                maxj = max(maxj,i+d[i]);
            }
            else 
            {
                f=1;
                break;
            }
        }
        if(f) cout<<-1<<"\n";
        else 
        {
            ll j=n-1;
            while(j>=0 && s[j]=='R') j--;
            // cout<<j<<"\n";
            vector<ll> temp;
            ll maxp=0,l=0;
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='B')
                {
                    temp.push_back(maxp-l);
                    temp.push_back(d[i]);
                    maxp=0;
                    l=0; 
                }
                else maxp = max(maxp,i+d[i]),l++;
            }
            // for(ll i=0;i<n;i++) cout<<d[i]<<" ";
            cout<<minJumps(d,j+1)<<"\n";
        }
    }
}    