    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back
    #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define vt vector
    #define sz(x) int(x.size()) 
    #define N 2e5+7

    vector<ll> dp,s;
    ll n;
    ll f(ll i)
    {
        if(dp[i]!=-1) return dp[i];
        for(ll k=2*i;k<=n;k+=i)
        {
            ll x;
            if(s[i-1]<s[k-1]) x=f(k)+1;
            else x=-1;
            if(s[k-1]>s[i-1] && dp[i]<x) dp[i]=x;
        }
        if(dp[i]<0) dp[i]=1;
        return dp[i];
    }

    int main()
    {
        FASTIO;
        ll t;
        cin>>t;
        while(t--)
        {
            cin>>n;
            dp.clear();
            dp.resize(n+1,-1);
            s.clear();
            s.resize(n,-1);
            for(ll i=0;i<n;i++) cin>>s[i];
            ll maxx=0;
            for(ll i=1;i<=n;i++)
            {
                maxx=max(maxx,f(i));
            }
            cout<<maxx<<"\n";
        }   
    }