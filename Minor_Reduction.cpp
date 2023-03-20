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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     string s;
    //     cin>>s;
    //     ll n=s.size(),f=0;
    //     string ans;
    //     ll y=n-1;
    //     for(ll i=n-1;i>0;i--)
    //     {
    //         string a="";
    //         // cout<<a<<" ";
    //         int x = (s[i]-'0') + (s[i-1]-'0');
    //         // cout<<x<<"\n";
    //         ll m;
    //         string b=to_string(x);
    //         a+=b;
    //         m=n-2+b.size();
    //         if(m>y)
    //         {   
    //             ans=a;
    //             a=s.substr(0,i-1);
    //             a+=ans;
    //             a+=s.substr(i+1,n-i-1);
    //             f=1;
    //             cout<<a<<"\n";
    //             break;
    //         }
    //         // cout<<a<<"\n";
    //     }
    //     if(!f)
    //     {
    //         int x = (s[1]-'0') + (s[0]-'0');
    //         cout<<x<<s.substr(2,n-2)<<"\n";
    //     }
    // }   
    cout<<(int)log2(8)<<"\n";
}