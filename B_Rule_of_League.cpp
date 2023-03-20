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
            ll n,x,y;
            cin>>n>>x>>y;
            if(x>y) swap(x,y);
            vector<ll> v(n+1);
            if(x!=0 || y==0 || (n-1)%y!=0)
            {
                cout<<"-1\n";
                continue;
            }
            ll p1=1;
            for(ll i=2;i<=n;i++)
            {
                if(v[p1]<y) v[p1]++;
                else p1 = i,v[i]=1;
                cout<<p1<<" ";
            }
            cout<<"\n";
        }   
    }