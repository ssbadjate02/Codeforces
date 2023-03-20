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

    int main()
    {
        FASTIO;
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,k;
            cin>>n>>k;
            string s;
            cin>>s;

            vector<ll> v;
            for(ll i=0;i<n;i++) if(s[i]=='1') v.pb(i);
            ll j=v.size()-1,i=n-1;
            if(v.empty())
            {
                cout<<0<<"\n";
                continue;
            }
            if(v.size()==1)
            {
                if(k-(n-v[0]-1)>=0)
                {
                    k-=(n-v[0]-1);
                    swap(s[v[0]],s[n-1]);
                }
                else 
                {
                    k-=v[0];
                    if(k>=0)
                    {
                        swap(s[v[0]],s[0]);
                    }
                }
            }
            else
            {
                if(k-(n-v[j]-1)>=0)
                {
                    k-=(n-v[j]-1);
                    swap(s[v[j]],s[n-1]);
                }
                k-=v[0];
                if(k>=0)
                {
                    swap(s[v[0]],s[0]);
                } 
            }
            ll ans=0;
            for(ll i=1;i<n;i++)
            {
                ans+=(10*(s[i-1]-'0') + s[i]-'0');
            }
            cout<<ans<<"\n";
        }      
    }