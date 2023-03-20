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
    string s;
    cin>>s;
    string t=s;
    ll f=0;
    // ll k=n-1,i=0,j=k;
   
    string temp = s + '?';
 
    reverse(s.begin(), s.end());
 
    temp += s;
 
    int n = temp.length();
 

    int lps[n]={0};
 
    // fill(lps, lps + n, 0);
 
    for (int i = 1; i < n; i++) {
 
        int len = lps[i - 1];
 
        while (len > 0
               && temp[len] != temp[i]) {
            len = lps[len - 1];
        }
 
        if (temp[i] == temp[len]) {
            len++;
        }
 
        lps[i] = len;
    }
 
    string ans=temp.substr(0, lps[n - 1]);
    for(ll i=lps[n-1]+1;i<t.size();i++)
    {
        if(t[i]!='a')
        {
            f=1;
        }
    }
    if(f) cout<<"No\n";
    else cout<<"Yes\n";
}