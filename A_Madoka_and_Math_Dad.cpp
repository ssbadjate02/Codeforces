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
        ll n,sum=0;
        cin>>n;
        ll f=0;
        for(ll i=0;sum<=n;i++)
        {
            if(i%2) sum+=1;
            else sum+=2;
            if(sum==n) f=2;
        }
        for(ll i=0;sum<=n;i++)
        {
            if(i%2==0) sum+=1;
            else sum+=2;
            if(sum==n) f=1;
        }
        sum=0;
        if(f==2) 
        {
            for(ll i=0;sum<n;i++)
            {
                if(i%2==0) 
                {
                    sum+=2;
                    cout<<2;
                }
                else 
                {
                    cout<<1;
                    sum+=1;
                }
            }
        }
        else
        {
           for(ll i=0;sum<n;i++)
            {
                if(i%2==0) 
                {
                    sum+=1;
                    cout<<1;
                }
                else 
                {
                    cout<<2;
                    sum+=2;
                }
            } 
        }
        cout<<"\n";
    } 
}