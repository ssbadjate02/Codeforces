#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())
 
int main()
{
	FASTIO;
	ll n,ans=0;
	cin>>n;
	vector<ll> up(n),md(n),lw(n),x(n),y(n),z(n);
	for(ll i=0;i<n;i++) cin>>up[i];
	for(ll i=0;i<n;i++) cin>>md[i];
	for(ll i=0;i<n;i++) cin>>lw[i];
	sort(up.begin(), up.end());
	sort(lw.begin(), lw.end());
	sort(md.begin(), md.end());
	for(ll i=0;i<n;i++)
	{
		x[i]=lower_bound(up.begin(), up.end(),md[i])-up.begin();
	}
	for(ll i=0;i<n;i++)
	{
		y[i]=upper_bound(lw.begin(), lw.end(),md[i])-lw.begin();
	}
	for(ll i=n-1;i>=0;i--)
	{
		ans+=(x[i])*(n-y[i]);	
	}
	cout<<ans;
}