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

ll gcd(ll x,ll y){
    return y?gcd(y,x%y):x;
}
ll LCM(ll x,ll y){
    return x/gcd(x,y)*y;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll h;char c;ll m,x;
        cin>>h>>c>>m>>x;
        ll y = LCM(1440ll,x)/x;
        ll ans=0;
        map<ll,map<ll,ll>> mp;
        while(1)
        {
            m+=x%60;
            h+=x/60+m/60;
            h%=24;
            m%=60;
            ll tt = h/10;
            ll oo = h%10;
            string a ,b;
            a+=m/10+'0';
            a+=m%10+'0';
            b+=h%10+'0';
            b+=h/10+'0';
            mp[h][m]++;
            if(mp[h][m]>=2) break;
            if(a==b) ans++;

            // cout<<h<<":"<<m<<"\n";
            // cout<<b<<" "<<a<<"\n";  
        }
        cout<<ans<<"\n";
    }
}