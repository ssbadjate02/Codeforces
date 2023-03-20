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
        string s,a= "";
        cin>>s;
        int n = s.size(),f=0;
        a+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]!='?' ) a+=s[i];
        }
        n = a.size();
        // cout<<a<<" ";
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='?' && s[i-1]=='M' && s[i+1]=='U')
            {
                f=1;
                break;
            }
        }
        for(int i=1;i<n;i++) if(a[i-1]=='M' && a[i]=='U') f=1;
        cout<<(f?"Yes\n":"No\n");
    }   
}