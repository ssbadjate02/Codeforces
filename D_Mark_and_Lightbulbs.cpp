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
        string b,a;
        cin>>n>>a>>b;
        if(a[0]!=b[0] || a[n-1]!=b[n-1])
        {
            cout<<"-1\n";
            continue;
        }
        vector<int> sa01,sb01,sa10,sb10;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                if(i>0 && a[i-1]=='0') sa01.pb(i);
                if(i<n-1 && a[i+1]=='0') sa10.pb(i);
            }
            if(b[i]=='1')
            {
                if(i>0 && b[i-1]=='0') sb01.pb(i);
                if(i<n-1 && b[i+1]=='0') sb10.pb(i);
            }
        }
        if(sa01.size()!=sb01.size() || sb10.size()!=sa10.size())
        {
            cout<<"-1\n";
            continue;   
        }
        int ans=0;
        for(int i=0;i<sa01.size();i++) ans+=abs(sa01[i]-sb01[i]);
        for(int i=0;i<sa10.size();i++) ans+=abs(sa10[i]-sb10[i]);
        cout<<ans<<"\n";

    }   
}