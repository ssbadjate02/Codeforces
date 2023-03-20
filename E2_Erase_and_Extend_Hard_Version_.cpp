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
        ll n,k,f=0,j,m;
        string s,ans="";
        cin>>n>>k>>s;
        vector<ll> v(n+1);
        v[1]=1;
        for(ll i=1;i<n;i++)
        {
            m=0;
            ll r=v[i];
            while(m<n-i && s[m+i]==s[m%r])
            {
                m++;
            }
            if(m==n-i)
            {
                f=1;
                j=i;
                break;
            }
            if(s[m+i]>s[m%r])
            {
                j=i;
                v[i+1]=v[i]+1;
                f=1;
                break;
            }
            else if(s[i+m]<s[m%r])
            {
                v[i+m+1]=v[i]+m+1;
                ll x=0;
                // for(x=0;x<=m;x++)v[i+m+1]+=s[i+x];
                i=i+m;
            }
        }
        if(f)
        {
            n=j;
        }
        ll x=0;
        for(ll i=0;i<k;i++)
        {
            cout<<s[x];
            x++;
            if(x==n) x=0;
        }
        // cout<<v[n];
        // for(l    l i=0;i<k;i++) cout<<ans[i];
    }