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
        int a,b;
        cin>>a>>b;
        int ans=1e9;
        for(int i=1;i<=3;i++)
        {
            for(int j=0;j<=3;j++)
            {
                if((i*a-j*b)%3==0) ans=min(ans,i+j-1);
            }
        }
        for(int i=1;i<=3;i++)
        {
            for(int j=0;j<=3;j++)
            {
                if((i*b-j*a)%3==0) ans=min(ans,i+j-1);
            }
        }
        cout<<ans<<"\n";
    }
}