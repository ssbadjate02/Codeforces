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
    ll tt=0;
    while(t--)
    {
        tt++;
        ll n,len;
        cin>>n>>len;
        set<ll> sl,sr;
        set<ll> sleftest;;
        deque<ll> d; 
        map<ll,ll> m;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            m[a]=i+1;
            sleftest.insert(a);
            if(b) 
            {
                sr.insert(len-a);
            }
            else
            {
                sl.insert(a);
            }
        }
        for(auto e:sleftest) d.push_back(e);
        vector<ll> ans;
        while(!d.empty())
        {
            ll l,r;
            if(!sl.empty())l=*sl.begin();
            else l = 1e9+7;
            if(!sr.empty())r=*sr.begin();
            else r=1e9+7;;
            ll leftest = d.front();
            ll rightest = d.back();
            if(l<r)
            {
                ans.push_back(m[d.front()]);
                sl.erase(sl.begin());
                if(l!=d.front()) 
                {
                    sr.insert(len-l);
                    sr.erase(sr.find(len-d.front()));
                }
                d.pop_front();
            }
            else if(r<l)
            {
                ans.pb(m[d.back()]);
                sr.erase(sr.begin());
                if(r!=len-d.back())
                {
                    sl.insert(len-r);
                    sl.erase(sl.find(d.back()));
                }
                d.pop_back();
            }
            else
            {
                if(m[d.front()]<m[d.back()])
                {
                    ans.push_back(m[d.front()]);
                    sl.erase(sl.begin());
                    if(l!=d.front()) 
                    {
                        sr.insert(len-l);
                        sr.erase(sr.find(len-d.front()));
                    }
                    d.pop_front();
                }
                else
                {
                    ans.pb(m[d.back()]);
                    sr.erase(sr.begin());
                    if(r!=len-d.back())
                    {
                        sl.insert(len-r);
                        sl.erase(sl.find(d.back()));
                    }
                    d.pop_back();
                }
            }

        }
        cout<<"Case #"<<tt<<": ";
        for(ll i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }   
}