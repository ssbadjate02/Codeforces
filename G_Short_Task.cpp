#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
const int N = 1e7;

// vector<ll> ans(N+1,-1),s(N+1);
int ans[N+1],s[N+1];
int main()
{
    FASTIO;
    for(int i=1;i<=N;i++) ans[i]=-1;
    for(int i=2;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i)
        {
            s[j]+=i;
        }    
    }
    for(int i=N;i;i--)
    {
        if(s[i]+1<=N) ans[s[i]+1]=i;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<ans[x]<<"\n";
    }
}