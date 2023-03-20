    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back
    #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define vt vector
    #define sz(x) int(x.size()) 
    #define N 2e5+7

    ll l,n;
    vector<ll> v;

    bool good(ll m)
    {
        for(ll i=0;i<n;i++)
        {
            
        }
    }

    int main()
    {
        FASTIO;
        cin>>k>>n;
        v.resize(n)
        for(ll i = 0; i < n; i++) cin>>v[i];
        
        ll l=0,r=1;
        // while(good(r)) r*=2;
        while(r>l+1)
        {
            ll m=(l+r)/2;
            if(good(m)) l=m;
            else r=m;
        }
        cout<<l;
    }   