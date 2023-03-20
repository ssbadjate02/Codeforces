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
        ll n=s.size(),ans=1e9+7,minans=1e9+7;
       for(char a='0';a<='9';a++)
       {
           for(char b='0';b<='9';b++)
           {
               char x=a,y=b,z=0;
               for(ll i=0;i<n;i++)
               {
                   if(s[i]==x)
                   {
                       z++;
                       swap(x,y);
                   }
               }
               ans=n-z+(z%2 && x!=y);
               minans=min(ans,minans);
           }
       }
        cout<<minans<<"\n"; 
    }   
}