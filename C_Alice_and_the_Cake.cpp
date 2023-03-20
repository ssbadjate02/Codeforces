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

// int f(vector<int>&v)
// {
//     ll n = v.size(),f=0,x;
//     if(v.size()==1) return 1;
//     sort(all(v));
//     vector<int> temp;
//     for(ll i=1;i<n;i+=2)
//     {
//         if(v[i]==v[i-1] || v[i]==v[i-1]+1)
//         {
//             temp.pb(v[i]+v[i-1]);
//             x=i;
//             f=1;
//             break;
//         }
//     }
//     if(!f) return false;
//     for(ll i=0;i<n;i++) if(i!=x && i!=x-1) temp.pb(v[i]);
// }

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f=0,summ=0;
        cin>>n;
        multiset<ll> s;
        for(ll i=0;i<n;i++) 
        {
            ll a;
            cin>>a;
            summ+=a;
            s.insert(a);
        }
        multiset<ll> v;
        v.insert(summ);
        while(v.size()>0)
        {
            auto it = v.begin();
            if(s.find(*it)!=s.end())
            {
                s.erase(s.find(*it));
                v.erase(it);
            }
            else
            {
                ll x = *it;
                v.erase(it);
                if((x)%2)
                {
                    v.insert((x)/2);
                    v.insert((x)/2 + 1);
                }
                else
                {
                    v.insert((x)/2);
                    v.insert((x)/2);
                }
            }
            if(*it==0)
            {
                f=1;
                break;
            } 
            // cout<<s.size()<<" "<<v.size()<<"\n";
        }
        // cout<<s.size()<<" "<<v.size();
        if(v.size()==s.size() && v.size()==0) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}