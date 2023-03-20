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
        ll x=0;
        vector<ll> v={1,2,3,4};
        do
        {
            ll f=0;
            for(ll i=0;i<3;i++)
            {
                if(v[i+1]+1<v[i])
                {
                    f=1;
                    break;
                }
            }
             if(!f)
                {
                    for(ll i=0;i<4;i++) cout<<v[i]<<" ";
                    cout<<"\n";
                    x++;
                }
        } while (next_permutation(v.begin(),v.end()));
        // cout<<x;
    }   
}