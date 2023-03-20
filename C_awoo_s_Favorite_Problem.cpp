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
        ll n,f=0,a1=0,b1=0,c1=0,a2=0,b2=0,c2=0;
        string a, b;
        cin>>n>>a>>b;
        for(ll i=0;i<n;i++)
        {
            if(a[i]=='a') a1++;
            else if(a[i]=='b') b1++;
            else c1++;

            if(b[i]=='a') a2++;
            else if(b[i]=='b') b2++;
            else c2++;
        }
        if(a1!=a2 || b1!=b2 || c1!=c2)
        {
            cout<<"NO\n";
            continue;
        }
        a1=0,b1=0,c1=0,a2=0,b2=0,c1=0,c2=0;
        vector<ll> pc1,pc2,pb1,pb2,p3,p4;
        for(ll i=0;i<n;i++)
        {
            if(a[i]=='a') pc1.pb(c1),pb1.pb(b1);
            if(a[i]=='c') c1++;
            if(a[i]=='b') b1++,p3.pb(c1);
        }
        for(ll i=0;i<n;i++)
        {
            if(b[i]=='a') pc2.pb(c2),pb2.pb(b2);
            if(b[i]=='c') c2++;
            if(b[i]=='b') b2++,p4.pb(c2);
        }
        if(pc1!=pc2) f=1;
        for(ll i=0;i<pb1.size();i++)
        {
            // cout<<pb1[i]<<" "<<pb2[i]<<"\n";
            if(pb1[i]>pb2[i])
            {
                f=1;
                break;
            }
        }
        for(ll i=0;i<p3.size();i++)
        {
            if(p3[i]>p4[i])
            {
                f=1;
                break;
            }
        }
        if( f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}
/*
bcaabababc
cbbababaac

bcabbabaac
cbbababaac

bcaabababc
cbbababaac

bcaabababc
cbbababaac

bcaabababc
cbbababaac

ab->ba
bc->cb

can increase count of 'b' before a
can increase count of 'c' before b
*/