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
        ll n,c=0;
        string s,b;
        cin>>n>>s>>b;
        vector<ll> used(n);
        for(ll i=0;i<n;i++)
        {
            if((s[i]=='0' && b[i]=='1') || (b[i]=='0' && s[i]=='1')) c+=2;
            else if(s[i]=='0' && b[i]=='0')
            {
                if(i>0 && (s[i-1]=='1' && b[i-1]=='1' && used[i-1]==0)) c+=2,used[i-1]=1;
                else if(i<n-1 && s[i+1]=='1' && b[i+1]=='1' && used[i+1]==0) c+=2,used[i+1]=1;
                else c++;
            }
        }
        cout<<c<<"\n";
    }   
}