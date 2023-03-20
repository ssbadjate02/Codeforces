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
    ll n,k;
    cin>>n>>k;
    string s,t;
    cin>>s;
    t=s;
    for(ll i=k;i<n;i++)
    {
        s[i]=s[i-k];
    }   
    if(t<=s)
    {
        cout<<n<<"\n"<<s;
        return 0;
    }
    for(ll i=k-1;i>=0;i--)
    {
        if(t[i]!='9')
        {
            t[i]++;
            for(ll j=i+1;j<k;j++)
            {
                if(t[j]=='9') t[j]='0';
            }
            break;
        }
    }
    for(ll i=k;i<n;i++)
    {
        t[i]=t[i-k];
    }
    cout<<n<<"\n"<<t;
}