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
        string s;
        cin>>s;
        ll n=s.size(),f=0;;
        ll i=0,j=n-1;
        char x=max(s[i],s[j]);
        while(i<=j)
        {
            if(i==j && s[i]!='a')
            {
                f=1;
                break;
            }
            if(s[i]==x)
            {
                i++;
                x--;
            }
            else if(s[j]==x)
            {
                j--;
                x--;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f) cout<<"NO\n";
        else cout<<"YES\n";
    }   
}