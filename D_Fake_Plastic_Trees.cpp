#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
#define en "\n"
#define sp " "
#define s1 cout<<"No"<<en;continue
ll trav(ll p,vector<vector<ll>>adj,vector<ll>l,vector<ll>r,ll &ans){
  if (adj[p].size()==0){
    ans++;
    return r[p];
  }
  ll csum=0;
  for(auto x:adj[p]){
    csum+=trav(x,adj,l,r,ans);
  }
  if (csum<l[p]) {ans++;}
//   return min(max(l[p],csum),r[p]);
    if(l[p]>csum) return r[p];
    return min(r[p],csum);
}
int main() {
	ll t,n;
	cin>>t;
	while(t--){
    cin>>n;ll p[n-1];
    vector<vector<ll>>adj(n);vector<ll>l(n),r(n);
    loop(i,0,n-1){
      cin>>p[i];
      adj[p[i]-1].push_back(i+1);
    }
    loop(i,0,n){cin>>l[i]>>r[i];}
    ll ans=0;
    ll x=trav(0,adj,l,r,ans);
    cout<<ans<<en;
	}
	return 0;
}