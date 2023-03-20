#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<a<<"\n";
            continue;
        }
        if(a>b) swap(a,b);
        if(a==0)
        {
            cout<<"-1\n";
            break;
        }
        ll ans=0;
        ll x = b/2+ b%2;
        while(a<x)
        {
            a*=2;
            ans++;
        }
        ll ans2 = ans+1;;
        ans+=(2*a-b)+1+2*(b-a);
        a*=2;
        swap(a,b);
        ans2+=(2*a-b)+1+2*(b-a);  
        // cout<<ans<<"\n";
        cout<<min(ans,ans2)<<"\n";
    }   
}
/*
1->2
2->1 & 3->2
1->2    
2->1 & 2->1
1->0 & 1->0


1->2
2->4
4->3 & 5->4
3->2 & 4>3
2->1 & 3>2
1->2
2->1 & 2->1
1->0 & 1->0
*/
