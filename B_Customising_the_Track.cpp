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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s=0;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i],s+=v[i];;
        if(s%n==0) cout<<"0\n";
        else
        {
            ll x=s/n;
            ll y=s%n;
            cout<<y*(n-y)<<"\n";
        }

    }
 }