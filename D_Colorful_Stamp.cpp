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

int check(string s)
{
    if(s.size()==0) return 1;
    if(s.size()==1) return 0;
    for(int i=1;i<s.size();i++)
    {
        if(s[0]!=s[i]) return 1;
    }
    return 0;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f=0;
        cin>>n;
        string s;
        cin>>s;
        string x="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!='W') x+=s[i];
            else
            {
                if(!check(x))
                {
                    f=1;
                    break;
                }
                // cout<<x<<"\n";
                x="";
            }
        }
        if(x!="")
        {
            if(!check(x))
                {
                    f=1;
                }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}
//RRBB
///WWWW