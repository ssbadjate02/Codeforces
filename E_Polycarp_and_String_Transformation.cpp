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
    ll t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        ll cnt=0,f=0;
        vector<ll> c(26),c1(26),nt(26);
        string v;
        for(ll i=0;i<b.size();i++)
        {
            cnt+=(c[b[i]-'a']==0);
            c[b[i]-'a']++;
        }
        for(ll i=b.size()-1;i>=0;i--)
        {
            if(c1[b[i]-'a']==0)
            {
                if(c[b[i]-'a']%cnt!=0) f=1;
                nt[b[i]-'a']=c[b[i]-'a']/cnt;
                cnt--;
                c1[b[i]-'a']++;
                v.pb(b[i]);
            }
        }
        ll x=0;
        reverse(v.begin(),v.end());
        for(ll i=0;i<26;i++) x+=nt[i];
        string s=b.substr(0,x);
        string temp="";
        vector<ll> t2(26);
        for(auto e:v)
        {
            for(ll i=0;i<s.size();i++) 
            {
                if(t2[s[i]-'a']==0) temp+=s[i];
            }
            // cout<<e;
            t2[e-'a']=1;
        }
        // cout<<"\n";
        // cout<<s<<"\n";
        if(temp==b)
        {
            cout<<s<<" "<<v<<"\n";
        }
        else cout<<"-1\n";
    }
}