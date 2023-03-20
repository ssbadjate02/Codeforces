#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 

const ll N = 1e6+6;
vector<ll> c(N);

int main()
{
    FASTIO;
    int aa,bb,cc,n;
    cin>>aa>>bb>>cc>>n;
    vector<vector<int>> p(n,vector<int>(2));
    for(int i=0;i<n;i++) cin>>p[i][0]>>p[i][1];
   double ans=0,sumx=0,sumy=0,a=aa,b=bb,c=cc;
    for(int i=0;i<n;i++)
    {
        double x=p[i][0];
        double y=p[i][1];
        sumx+=a*(a*x+b*y)/(a*a+b*b);
        sumy+=b*(a*x+b*y)/(a*a+b*b);
	}
    sumx/=n;
    sumy/=n;
    for(int i=0;i<n;i++)
    {
        ans+=sqrt(sumx*sumx+sumy*sumy);
    }
    cout<<ans;
    return ans;
}