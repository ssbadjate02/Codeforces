#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

string a,b;
ll n,m,f;
void l(int i, int j)
{
    while(i>=0 && j<m && a[i]==b[j]) i--,j++;
    if(j==m)
    {
        f=1;
        return;
    }
}
void r(int i,int j)
{
    while(i<n && j<m && a[i]==b[j]) l(i,j),i++,j++;
    l(i,j);
    if(j==m)
    {
        f=1;
        return;
    }
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>a>>b;
        n=a.size(),m=b.size();
        for(int i=0;i<n;i++) r(i,0);
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}