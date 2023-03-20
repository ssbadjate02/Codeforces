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

ll a,b,n,rt,lft;   
int good(ll mid)
{
    ll x=0;
    mid--;
    // cout<<rt<<" "<<lft<<"\n";
    // cout<<mid<<"\n";
    if(mid<=rt)
    {
        x+=mid*(mid+1)/2;
        x+=rt-mid;
    }
    else
    {
        x+=mid*(mid+1)/2-(mid-rt)*(mid-rt+1)/2;
    }
    // cout<<x<<"\n";
    if(mid<=lft)
    {
        x+=mid*(mid+1)/2;
        x+=lft-mid;
    }
    else
    {
        x+=mid*(mid+1)/2-(mid-lft)*(mid-lft+1)/2;
    }
    // cout<<x<<"\n";
    if(mid+1+x>b) return 0;
    return 1;
}

int main()
{
    FASTIO;
    cin>>a>>b>>n;
    ll l=1,r=b;
    rt=a-n;
    lft=n-1;
    // cout<<good(7ll)<<"\n\n";
    while(r>l+1)
    {
        ll mid=l+(r-l)/2    ;
        if(good(mid)) l=mid;
        else r=mid;
    }
    if(good(r)) cout<<r<<"\n";
    else cout<<l<<"\n";
}