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

vector<vector<int>> dp(101,vector<int>(90001,-1));
vector<pair<int,int>> a;
bool comp(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first + a.second > b.first + b.second;
}
int f(int i, int r)
{
    if(i>=a.size()) return 0;
    if(dp[i][r]!=-1) return dp[i][r];
    if(a[i].ff>r) return dp[i][r] = f(i+1,r);
    return dp[i][r] = max(f(i+1,r+a[i].ss)+1,f(i+1,r));
}


int main()
{
    FASTIO;
    int n,r;
    cin>>n>>r;
    vector<pair<int,int>> v(n),pos;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].ff>>v[i].ss;
        if(v[i].ss>=0) pos.pb(v[i]);
        else v[i].ff = max(v[i].ff,abs(v[i].ss));
    }
    int ans=0;
    sort(all(pos));
    for (int i = 0; i < int(pos.size()); i++) 
    {
		if (r >= pos[i].first) {
			r += pos[i].second;
			++ans;
		}
	}
    for(int i=0;i<n;i++)
    {
        if(v[i].ss<0) a.pb(v[i]);
    }
    // for(int i=0;i<a.size();i++) cout<<a[i].ff<<" "<<a[i].ss<<"\n";
    // cout<<r<<"\n";
    sort(all(a),comp);
    ans+=f(0,r);
    cout<<ans<<"\n";
}