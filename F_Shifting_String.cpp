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

    ll lCM(ll x, ll y)
    {
        ll temp = x/__gcd(x,y);
        return temp*y;
    }
    ll find(string s,string t)
    {
        ll i=0,j=0;
        ll n=s.size(),m = t.size();
        for(i=0;i<n && j<m;i++)
        {
            if(s[i]==t[j]) 
            {
                j++;
            }
            else j=0;
        }
        return i-m;
    }
    int main()
    {
        FASTIO;
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            string s;
            cin>>s;
            vector<ll> v(n),vis(n);
            for(ll i=0;i<n;i++) cin>>v[i],v[i]--;
            ll ans = 1;
            for(ll k=0;k<n;k++)
            {
                if(!vis[k])
                {
                    ll j=k;
                    vector<ll> p;
                    while(!vis[j])
                    {
                        vis[j]=1;
                        p.pb(j);
                        j=v[j];
                    }
                    string a="",b="";
                    for(ll i=p.size()-1;i>=0;i--) a+=s[p[i]];
                    int sz = a.length();
 
                    ll bns =1;
                    string t = a;
                    rotate(a.begin(),a.begin()+1,a.end());
                    while(t!=a){
                        bns++;
                        rotate(a.begin(),a.begin()+1,a.end());
                    }
                    ans = lcm(ans,bns);
                }
            }
            cout<<ans<<"\n";
        }   
    }