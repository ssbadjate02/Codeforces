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
        vector<ll> p;
        for(ll i=1;i<1e9+7;i*=2) p.pb(i);
        while(t--)
        {
            ll n,f=1;
            cin>>n;
            vector<ll> v(n),used(n);
            map<ll,vector<ll>> m;
            for(ll i=0;i<n;i++) cin>>v[i];
            for(ll i=0;i<n;i++)
            {
                ll j = v[i];
                while(j!=0)
                {
                    if(j<=n) m[j].pb(i);
                    j/=2;
                }
            }
            // cout<<"-";
            for(ll i=n;i>0;i--)
            {
                if(m.find(i)==m.end() || m[i].size()==0) 
                {
                    f=0;
                    break;
                }
                ll g=0;
                for(ll j=0;j<m[i].size();j++)
                {
                    if(!used[m[i][j]])
                    {
                        used[m[i][j]]=1;
                        g=1;
                        break;
                    }
                }
                if(!g) f=0;
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }   
    }