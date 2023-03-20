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
    string s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(i%2==0)
            {
                cout<<"Takahashi";
            }
            else
            {
                cout<<"Aoki";
            }
            break;
        }
    }   
}