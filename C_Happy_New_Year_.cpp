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
    ll k;
    cin>>k;
    string s="";
    while(k!=0)
    {
        if(k%2) s+='2';
        else s+='0';
        k/=2;
    } 
    reverse(s.begin(),s.end());
    cout<<s;
}