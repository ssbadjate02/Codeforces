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
        ll n,m,k;
        cin>>n>>m>>k;
        if(m<=1 && k>0)
        {
            cout<<"NO\n";
            continue;
        }
        ll x=m/2;
        ll nor=ceil((double)(k)/(double)x);
        if((n-nor)%2==1 && (n-(k%n))%2==1) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}