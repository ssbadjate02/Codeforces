#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7
#define ff first
#define ss second

int fun(vector<pair<ll,ll>> s1,vector<pair<ll,ll>> s2, vector<pair<ll,ll>> t1, vector<pair<ll,ll>> t2)
{
    ll f=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    
    // for(ll i=0;i<s1.size();i++)
    // {
    //     if(s1[i].ff-t1[i].ff!=s1[0].ff-t1[0].ff || s1[i].ss-t1[i].ss!=s1[0].ss-t1[0].ss) f=1;
    // }
    for(ll i=0;i<s2.size();i++)
    {
        if(s2[i].ff-t2[i].ff!=s2[0].ff-t2[0].ff || s2[i].ss-t2[i].ss!=s2[0].ss-t2[0].ss) f=1;
    }   
    if(f) return 0;
    return 1;
}

int main()
{
    FASTIO;
    ll n,f=0;
    cin>>n;
    vector<string> s(n),t(n);
    vector<pair<ll,ll>> s1,s2,t1,t2;   
    for(ll i=0;i<n;i++) cin>>s[i];
    for(ll i=0;i<n;i++) cin>>t[i];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(s[i][j]=='#') s2.pb({i,j});
            else s1.pb({i,j});
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(t[i][j]=='#') t2.pb({i,j});
            else t1.pb({i,j});
        }
    }  
    if(s1.size()!=t1.size() || s2.size()!=t2.size()) 
    {
        cout<<"no\n";
        return 0;
    }
    if(fun(s1,s2,t1,t2))
    {
        cout<<"Yes\n";
        return 0;
    }
    vector<pair<ll,ll>> t3,t4;
    for(ll i=0;i<t1.size();i++) t3.pb({t1[i].second,t1[i].first});
    for(ll i=0;i<t2.size();i++) t4.pb({t2[i].second,t2[i].first});
    if(fun(s1,s2,t3,t4))
    {
        cout<<"Yes\n";
        return 0;
    }
    for(ll i=0;i<t1.size();i++) t3[i].first=-(t3[i].first);
    for(ll i=0;i<t4.size();i++) t4[i].first=-(t4[i].first);
    if(fun(s1,s2,t3,t4)) 
    {
        cout<<"Yes\n";
        return 0;
    }
    for(ll i=0;i<t1.size();i++) t3[i].first=-(t1[i].first),t3[i].ss=-(t1[i].ss);
    for(ll i=0;i<t4.size();i++) t4[i].first=-(t2[i].first),t4[i].ss=-(t2[i].ss);
    if(fun(s1,s2,t3,t4)) 
    {
        cout<<"Yes\n";
        return 0;
    }
    cout<<"No\n";
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
// #define vt vector
// #define sz(x) int(x.size()) 
// #define N 2e5+7

// int main()
// {
//     FASTIO;
//     ll n,f=0;
//     cin>>n;
//     vector<string> s(n),t(n);
//     vector<pair<ll,ll>> s1,s2,t1,t2;   
//     for(ll i=0;i<n;i++) cin>>s[i];
//     for(ll i=0;i<n;i++) cin>>t[i];
//     ll f=0;
//     for(ll i=0;i<n;i++)
//     {
//         for(ll j=0;j<n;j++)
//         {
//             if(s[i][j]!=t[i][j]) f=1;
//         }
//     }
//     if(!f)
//     {
//         cout<<"Yes\n";
//         return 0;
//     }
//     ll l=0,k=n-1;
//     for(ll i=0;i<n;i++)
//     {
//         for(ll j=0;j<n;j++)
//         {
//             if(s[i][j]!=t[i][j]) f=1;
//         }
//     }
// }