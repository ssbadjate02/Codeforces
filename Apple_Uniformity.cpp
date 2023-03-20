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
        ll n,q;
        cin>>n>>q;
        multiset<ll> s,diff;
        vector<ll> v(n),temp;
        for(ll i=0;i<n;i++) cin>>v[i],s.insert(v[i]);
        temp=v;
        sort(v.begin(),v.end());
        for(ll i=1;i<n;i++) diff.insert(v[i]-v[i-1]);
        for(ll i=0;i<q;i++)
        {
            ll a,b;
            cin>>a>>b;
            auto it1=s.find(temp[a-1]);
            // cout<<*it1<<"\n";
            temp[a-1]=b;
            auto it2=it1;
            if(it1!=s.begin())
            {
                it1--;
                diff.erase(diff.find(*it2-*it1));
            }  
            auto it3=it2;
            it3++;
            if(it3!=s.end())
            {
                // cout<<*it3<<" "<<*it2<<"\n";
                diff.erase(diff.find(*it3-*it2));
            }
            s.erase(it2);
            s.insert(b);
            it1=s.find(b);
            it2=it1;
            it3=it1;
            it3++;
            if(it2!=s.begin())
            {
                it2--;
                diff.insert(*it1-*it2);
            }
            if(it3!=s.end())
            {
                diff.insert(*it3-*it1);
            }
            cout<<*diff.begin()<<"\n";
        }
    }   
}