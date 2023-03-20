    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back
    #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define vt vector
    #define sz(x) int(x.size()) 
    const int N = 35000;


    int main()
    {
        FASTIO;
        vector<ll> primes(N+1,1);
        primes[0]=primes[1]=0;
        for(ll i=2;i*i<=N;i++)
        {
            if(primes[i]==1)
            {
                for(ll j=i*i;j<=N;j+=i) primes[j]=0;
            }
        }

        ll t;
        cin>>t;
        while(t--)
        {
            ll a,b,k,g,m,ta,tb;
            cin>>a>>b>>k;
            ta=a;
            tb=b;
            g=__gcd(a,b);
            ll x=0,y=0;
            for(ll i=2;i<N;i++)
            {
                if(primes[i])
                {
                    while(a%i==0) x++,a/=i;
                }
            }
            for(ll i=2;i<N;i++)
            {
                if(primes[i])
                {
                    while(b%i==0) x++,b/=i;
                }
            }
            if(a>1) x++;
            if(b>1) y++;
            a=ta;
            b=tb;
            
            if(a==b) m=0;
            else if(g==a || g==b) m=1;
            else m=2;
            if(x+y>=k && k>=m)
            {
                if(k==1 && m==1) cout<<"YES\n";
                else if(k!=1) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else cout<<"NO\n";
        }   
    
    }