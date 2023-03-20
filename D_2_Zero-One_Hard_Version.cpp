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

ll n,x,y;
string a,b;
vector<ll>v;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        cin>>a>>b;
        v.clear();
        if(a==b)
        {
            cout<<"0\n";
            continue;
        }
        for(ll i=0;i<n;i++) if(a[i]!=b[i]) v.pb(i);
        if(v.size()%2)
        {
            cout<<"-1\n";
            continue;
        }
        ll ans=0;

        if(x>=y)
        {
            if(v.size()==2 && v[1] - v[0]==1)
            {
                cout<<min(x,2*y)<<"\n";
                continue;
            }
            cout<<(v.size()/2)*y<<"\n";
            continue;
        }

        for(ll i=0;i+1<v.size();i+=2)
        {
            if((v[i+1]-v[i])*x<y) ans+=(v[i+1]-v[i])*x;
            else ans+=y;
        }
        ll ans1=(v[v.size()-1] - v[0])*x<y?(v[v.size()-1] - v[0])*x:y;
        for(ll i=1;i+1<v.size();i+=2)
        {
            if((v[i+1]-v[i])*x<y) ans1+=(v[i+1]-v[i])*x;
            else ans1+=y;
        }
        cout<<min(ans,ans1)<<"\n";
    }   
}