    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define pb push_back
    #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define vt vector
    #define sz(x) int(x.size()) 
    #define N 2e5+7

    map<pair<ll,ll>,ll> m;
    int q(ll l,ll r)
    {
        if(m.find({l,r})!=m.end()) return m[{l,r}];
        if(l==r) return -1;
        cout<<"? "<<l<<" "<<r<<endl;
        ll x;
        cin>>x;
        return m[{l,r}]=x;
    }

    int main()
    {
        FASTIO;
        ll n;
        cin>>n;
        ll l=1,r=n;

        while(r>=l+1)
        {
            ll x=q(l,r);
            ll m=(l+r)/2;
            if(x<=m)
            {
                // if(m-l==1)
                // {
                //     if(m==q(l,m))
                //     {
                //         cout<<"! "<<l<<endl;
                //     }
                //     else
                //     {
                //        cout<<"! "<<m<<endl; 
                //     }
                //     break;
                // }
                if(q(l,m)==x) r=m;
                else l=m;
            }
            else
            {
                // if(r-m==1)
                // {
                //     if(m==q(m,r))
                //     {
                //         cout<<"! "<<r<<endl;
                //     }
                //     else
                //     {
                //        cout<<"! "<<m<<endl; 
                //     }
                //     break;
                // }
                if(q(m,r)==x) l=m;
                else r=m;
            }
        }
        cout<<"! "<<l<<endl;
    }