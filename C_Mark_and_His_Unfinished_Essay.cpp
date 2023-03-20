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
        ll n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<vector<ll>> v(c);
        vector<ll> len(c+1);
        len[0] = n;
        for(int i=0;i<c;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[i] = {a-1,b-1};
            len[i+1] = len[i] + b - a + 1;
        }
        for(int i=0;i<q;i++)
        {
            ll k;
            cin>>k;
            k--;
            for(ll j=c-1;j>=0;j--)
            {
                if(k>=len[j]) k+=v[j][0] - len[j];
            }
            cout<<s[k]<<"\n";
            // cout<<1;;            
        }
    }   
}