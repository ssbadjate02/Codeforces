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
        vector<pair<ll,pair<ll,ll>>> v;
        for(ll i=0;i<=9;i++)
        {
            for(ll j=i;j<=9;j++)
            {
                for(ll k=j;k<=9;k++)
                {
                    if((i+j+k)%10==3) v.pb({i,{j,k}});
                }
            }
        }
        while(t--)
        {
            ll n;
            cin>>n;
            vector<ll> m(10);
            for(ll i=0;i<n;i++)
            {
                ll a;
                cin>>a;
                m[a%10]++;
            }
            ll f=0;
            for(ll i=0;i<v.size();i++)
            {
                ll a = v[i].ff, b = v[i].ss.ff, c = v[i].ss.ss;
                if(a==b && b==c)
                {
                    if(m[a]>=3) 
                    {
                        f=1;
                        // cout<<a<<" "<<b<<" "<<c<<"\n";
                        break;
                    }
                }
                else if(a==b)
                {
                    if(m[a]>=2 && m[c]>=1) 
                    {
                        f=1;
                        // cout<<a<<" "<<b<<" "<<c<<"\n";
                        break;
                    }
                }
                else if(b==c)
                {
                    if(m[a]>=1 && m[b]>=2) 
                    {
                        f=1;
                        // cout<<a<<" "<<b<<" "<<c<<"\n";
                        break;
                    }
                }
                else
                {
                    if(m[a]>=1 && m[b]>=1 && m[c]>=1) 
                    {
                        f=1;
                        // cout<<a<<" "<<b<<" "<<c<<"\n";
                        break;
                    }
                }
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }   
    }