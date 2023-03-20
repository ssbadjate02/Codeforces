#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

string s;
vector<vector<ll>> dp;
bool f(ll i,ll j)
{
    if(i==j-1) return s[i]!=s[j];
    if(dp[i][j]!=-1) return dp[i][j];
    bool a = f(i+1,j-1)||s[i]!=s[j];
    bool b = f(i+2,j)||s[i]!=s[i+1];
    bool c = f(i+1,j-1)||s[i]!=s[j];
    bool d = f(i,j-2)||s[j]!=s[j-1];
    return dp[i][j] = (a&&b) || (c&&d);
}


int main()
{
    FASTIO;
    ll t,x=0;
    cin>>t;
    while(t--)
    {
        cin >> s;
        ll n = s.size();
        dp.clear();
        dp.resize(n,vector<ll>(n,-1));
        if(!f(0,n-1)) cout<<"Draw\n";
        else cout<<"Alice\n";
    }   
}