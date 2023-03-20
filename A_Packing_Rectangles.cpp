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
	ll n,k,s=0;
	cin>>n>>k;
	vector<ll> v(n);
	for(ll i=0 ; i<n ; i++) cin>>v[i];
	double l=1,r,m;
	for(ll i=0 ; i<100 ; i++)
	{
		m=(l+r)/2;
		s=0;
		for(ll i=0;i<n;i++) s+=v[i]/m;
		if(s>=k) l=m;
		else r=m;
	}
	cout<<l;
}
