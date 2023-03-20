#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

string s;
ll nb,ns,nc,pb,ps,pc,r,tb=0,ts=0,tc=0;

bool good(ll m)
{
    ll nos=m*ts-ns,noc=m*tc-nc,nob=m*tb-nb,x=0;
    if(nos>0) x+=nos*ps;
    if(nob>0) x+=nob*pb;
    if(noc>0) x+=noc*pc;
    return x<=r;
}

int main()
{
    FASTIO;
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    ll l=0,r=1;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='B') tb++;
        else if(s[i]=='C') tc++;
        else ts++;
    }
    while(good(r)) r*=2;
    while(r>l+1)
    {
        ll m=(l+r)/2;
        if(good(m)) l=m;
        else r=m;
    }
    cout<<l;
}