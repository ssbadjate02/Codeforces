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

    const ll N = 1e5+5;

    int main()
    {
        FASTIO;
        ll t;
        cin>>t;
        vector<vector<ll>> a(N);
        for(ll i=1;i<N;i++)
        {
            for(ll j=i;j<N;j+=i) a[j].pb(i);
        }
        while(t--)
        {
            ll n,m,ans=1e9;
            cin>>n>>m;
            vector<ll> v(n);
            for(ll i=0;i<n;i++) cin>>v[i];
            set<ll> s(all(v));
            v = vector<ll>(all(s));
            map<ll,ll> mp;
            ll i=0,j=1;
            n = v.size();
            for(auto k:a[v[0]])
            {
                if(k<=m) mp[k]++;
            }
           
            for(ll i=0;i<n;i++)
            {
                while(mp.size()<m && j<n)
                {
                    for(auto k:a[v[j]]) 
                    {
                        if(k<=m) mp[k]++;
                        else break;
                    }
                    j++;
                }
                if(mp.size()==m) ans = min(ans,v[j-1]-v[i]);
                for(auto k:a[v[i]])
                {
                    if(k<=m)
                    {
                        mp[k]--;
                        if(mp[k]==0) mp.erase(k);
                    }
                    else break;
                }
                
            }
            if(mp.size()==m && j<=n)ans = min(ans,v[j-1]-v[i]);
            if(ans>=1e9) ans = -1;
            cout<<ans<<"\n";
        }
    }
    /*
        2 3 7 9
        3 4 5 6 7   
    */