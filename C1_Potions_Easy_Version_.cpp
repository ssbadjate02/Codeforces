#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7


int f(int l, int r, int x)
    {
        if(l+1==r && l==x) return 0;
        if(x>=r || x<l) return 1000009;
        int anss=1000009;
        for(int i =l;i<r;i++)
        {
            anss = min(anss,min(f(l,i,x),f(i,r,x))) + i;
        }
        return anss;
    }
    int getMoneyAmount(int n) 
    {
        int ans = 0;
        for(int i=1;i<=n;i++) ans=max(ans,f(1,n+1,i));
        return ans;
    }

int main()
{
    cout<<getMoneyAmount(10);
}