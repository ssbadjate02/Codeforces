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
        ll n,ans=0;
        string s;
        cin>>n>>s;
        ll i=1,j=n-1,x=1;
        while(s[i]==s[0]) i++,x++;
        while(j>i && s[j]==s[0]) j--,x++;
        if(i>j)
        {
            if(x<=2) {
                cout<<"0\n";
                continue;
            }
            if(x==3) {
                cout<<"1\n";
                continue;
            }
            cout<<(x + 2)/3<<"\n";
            // cout<<"Hi\n";
            continue;
        }
        ans+=(x)/3;
        x=1;
        // cout<<i<<" "<<j<<"\n";
        for(ll k=i+1;k<=j;k++)
        {
            if(s[k]==s[k-1]) x++;
            else
            {
                ans+=(x)/3;
                x=1;
            }
        }
        ans+=(x)/3;
        cout<<ans<<"\n";
    }   
}