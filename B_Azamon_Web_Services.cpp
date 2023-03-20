#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

string s,c;
ll n,m;

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>s>>c;
        n=s.size();
        m=s.size();
        if(s<c)
        {
            cout<<s<<"\n";
            continue;
        }
         ll f=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]==c[i])
            {
                for(ll j=n-1;j>i;j--)
                {
                    if(s[j]<c[i])
                    {
                        swap(s[j],s[i]);
                        f=1;
                        break;
                    }
                }
                if(f && s<c)
                {
                    cout<<s<<"\n";
                    break;
                }
            }
            else if(s[i]>c[i])
            {
                for(ll j=n-1;j>i;j--)
                {
                    if(s[j]<c[i])
                    {
                        swap(s[j],s[i]);
                        f=1;
                        break;
                    }
                }
                if(!f)
                {
                    for(ll j=n-1;j>i;j--)
                    {
                        if(s[j]==c[i])
                        {
                            swap(s[j],s[i]);
                            f=1;
                            break;
                        }
                    }
                }
                if(f && s<c)
                {
                    cout<<s<<"\n";
                    break;
                }
                else if(f && s>=c) f=0;
                break;
            }
        }
        if(!f) cout<<"---\n";
    }
}