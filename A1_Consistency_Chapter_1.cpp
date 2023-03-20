#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

int main()
{
    FASTIO;
    ll t,x=0;
    cin>>t;
    map<char,ll> m;
    for(char i='A';i<='Z';i++) m[i]=1;
    m['A']=0;
    m['E']=0;
    m['I']=0;
    m['O']=0;
    m['U']=0;
    while(t--)
    {
        x++;
        string s;
        cin>>s;
        ll minans=1e9+7,ans=0;
        for(char i='A';i<='Z';i++)
        {
            ans=0;
            for(auto j:s)
            {
                if(i==j) continue;
                else if(m[i]!=m[j]) ans++;
                else ans+=2;
            }
            minans=min(ans,minans);
        }
        cout<<"Case #"<<x<<": "<<minans<<"\n";
    }   
}