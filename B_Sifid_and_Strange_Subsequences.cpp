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
            ll n,c=0;
            cin>>n;
            vt<ll> v(n);
            for(ll i=0;i<n;i++) cin>>v[i];
            sort(v.begin(),v.end());
            ll m=1e9,x=0;
            for(ll i=0;i<n;i++)
            {
                if(i) m=min(m,v[i]-v[i-1]);
                if(v[i]>0)
                {
                    x=v[i];
                    break;
                }
                else c++;
            }
            if(x && m>=x) c++;
            cout<<c<<"\n";
        }   
    }