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
    ll ans=0;
    string s;
    for(char i='a';i<k+'a';i++)
    {
        s+=i;
        for(char j=i+1;j<k+'a';j++)
        {
            s+=i;
            s+=j;
        }
    }
    while(s.size()<n) s+=s;
    cout<<s.substr(0,n);   
}