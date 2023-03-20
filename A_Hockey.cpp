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
    ll n;
    cin>>n;
    vector<string> v;
    for(ll i=0;i<n;i++)
    {
        string t;
        cin>>t;
        v.pb(t);
    }
    string s;
    cin>>s;
    string a;
    cin>>a;
    string st=s;
    vector<ll> is(500);
    for(ll i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<v[i].size();j++) v[i][j]=tolower(v[i][j]);
    }

    for(ll i=0;i<n;i++)
    {
        ll k=0;
        while(1)
        {
            k = s.find(v[i], k);
            if (k == string::npos) break;
            for(ll j=0;j<v[i].size();j++) is[j+k]=1;
            k++;
        }
    }
    // cout<<s<<"\n"<<v[0]<<"\n";
    // for(ll i=0;i<s.size();i++) cout<<is[i];
    // cout<<"\n";
    for(ll i=0;i<s.size();i++)
    {
        if(is[i])
        {
            if(s[i]==a[0])
            {
                if(a[0]!='a')
                {
                    if(st[i]>='a' && st[i]<='z') s[i] = 'a';
                    else s[i]='A';
                }
                else
                {
                    if(st[i]>='a' && st[i]<='z') s[i]='b';
                    else s[i]='B';
                }
            }
            else
            {
                if(st[i]>='a' && st[i]<='z') s[i]=a[0];
                else s[i]=toupper(a[0]);
            }
        }
        else s[i]=st[i];
    }
    cout<<s;
}