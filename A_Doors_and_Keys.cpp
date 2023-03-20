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
        string s;
        cin>>s;
        ll f=0;
        vector<char> v;
        for(ll i=0;i<6;i++)
        {
            if(s[i] == 'r' || s[i]=='g' || s[i] == 'b') v.pb(s[i]);
            else 
            {
                if(find(all(v),tolower(s[i]))==v.end())
                {
                    f=1;
                    break;
                }
            }
            
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}