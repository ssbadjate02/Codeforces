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
    ll n;
    cin>>n;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i>n-6 || j> n-6) continue;
            vector<string> s(6);
            for(ll k=i;k<i+6;k++)
            {
                for(ll l=j;l<j+6;l++) s[k-i]+=v[k][l];
            }
            for(ll l=0;l<6;l++)
            {
                ll c=0;
                for(ll k=0;k<6;k++) c+=(s[l][k]=='#');
                if(c>=4) 
                {
                    cout<<"Yes\n";
                    return 0;
                }
            }
            for(ll k=0;k<6;k++)
            {
                ll c=0;
                for(ll l=0;l<6;l++) c+=(s[l][k]=='#');
                if(c>=4) 
                {
                    cout<<"Yes\n";
                    return 0;
                }
            }
            ll c=0;
            for(ll l=0,k=0;l<6 && k<6;l++,k++) c+=s[l][k]=='#';
            if(c>=4) 
            {
                cout<<"Yes\n";
                return 0;
            }
            c=0;
            for(ll l=5,k=0;l>=0 && k<6;l--,k++) c+=s[l][k]=='#';
            if(c>=4) 
            {
                cout<<"Yes\n";
                return 0;
            }
        }
    }  
    cout<<"No\n";
}