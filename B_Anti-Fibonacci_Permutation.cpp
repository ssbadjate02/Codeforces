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
        ll n;
        cin>>n;
        vector<vector<ll>> ans;
        vector<ll> v;
        if(n==3)
        {
            cout<<"3 2 1\n1 3 2\n3 1 2\n";
            continue;
        }
        for(ll i=n;i>1;i--)
        {
            v.pb(i);
        }
        // for(ll i=3;i<=n;i+=2)
        // {
        //     v.pb(i);
        // }
        for(ll i=0;i<=v.size();i++)
        {
            vector<ll> temp=v;
            temp.insert(i+temp.begin(),1);
            ans.pb(temp);
        }
        for(ll i=0;i<ans.size();i++)
        {
            for(ll j=0;j<ans[i].size();j++) cout<<ans[i][j]<<" ";
            cout<<"\n";
        }
    }   
}