// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
// #define all(x) (x).begin(),(x).end()
// #define ss second
// #define ff first
// template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
// template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

// int main()
// {
//     FASTIO;
//     ll t;
//     cin>>t;
//     // vector<ll> p(100005);
//     while(t--)
//     {
//         ll n,c=0,ans=0;
//         cin>>n;
//         vector<ll> v(n);
//         for(ll i=0;i<n;i++) cin>>v[i];
//         ll i=0,j=0;
//         vector<ll> p;
//         // set<ll>s;
//         for(i=1;i<n;i++)
//         {
//             if(v[i]==v[i-1])
//             {
//                p.pb(i);
//             }
//         }
//         // for(j=n-1;j>0;j--) 
//         // {
//         //      if(v[j]==v[j-1])
//         //     {
//         //        ans+=()
//         //     }
//         // }
//         // while(!p.empty())
//         if(p.empty() || p.size()==1) 
//         {
//             cout<<"0\n";
//             continue;
//         }
//         ll l = p[0],ans2=0;
//         for(ll i=1;i<p.size();i+=2)
//         {
//             ans+=(p[i]-l+1)/2;
//             l=p[i];
//         }
//         l = p[p.size()-1];
//         for(ll i=p.size()-2;i>=0;i-=2)
//         {
//             ans2+=(l - p[i]+1)/2;
//             l=p[i]+1;
//         }
//         cout<<min(ans,ans2)<<"\n";
//     }   
// }

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
    // vector<ll> p(100005);
    while(t--)
    {
        ll n,c=0,ans=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll i=0,j=0;
        for(i=1;i<n;i++)
        {
            if(v[i]==v[i-1])
            {
               break;
            }
        }
        for(j=n-1;j>0;j--) 
        {
             if(v[j]==v[j-1])
            {
               break;
            }
        }
        if(j==i+1) cout<<(j-i);
        else if(j>i) cout<<j-i-1;
        else cout<<0 ;
        cout<<"\n"; 
    }   
}

