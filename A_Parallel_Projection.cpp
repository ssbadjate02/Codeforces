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
        ll w,d,h,a,b,f,g;
        cin>>w>>d>>h>>a>>b>>f>>g;
        cout<<min(
            {
                h+abs(a-f)+b+g,
                h+abs(a-f)+d-b+d-g,
                h+abs(b-g) + a + f,
                h+abs(b-g) + w-a+w-f
            }
        )<<"\n";
    }   
}