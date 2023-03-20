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
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll i=0,j=n-1,x=-1;
    string ans="";
    while(i<=j)
    {
        if(i==j && v[i]>x)
        {
            ans+="L";
            break;
        }
        if(v[i]<v[j])
        {
            if(v[i]>x)
            {
                x=v[i];
                ans+="L";
                i++;
            }
            else if(v[j]>x)
            {
                x=v[j];
                ans+="R";
                j--;
            }
            else break;
        }
        else
        {
            if(v[j]>x)
            {
                x=v[j];
                ans+="R";
                j--;
            }
            else if(v[i]>x)
            {
                x=v[i];
                ans+="L";
                i++;
            }
            else break;
        }

    }   
    cout<<ans.size();
    cout<<"\n"<<ans<<"\n";
}