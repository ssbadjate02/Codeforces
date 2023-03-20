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
    ll T;
    cin>>T;
    while(T--)
    {
        ll n,g=0;
        string t;
        cin>>t>>n;
        vector<string>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        vector<pair<int,int>> ans;
        for(ll i=0;i<t.size();)
        {
            ll f=0;
            for(ll r=t.size()-1;r>=i;r--)
            {
                for(ll l=0;l<=i;l++)
                {
                    string temp = t.substr(l,r-l+1);
                    for(ll j=0;j<n;j++) 
                    {
                        if(temp==v[j])
                        {
                            f=1;
                            ans.push_back({j+1,l+1});
                            i=r+1;
                            break;
                        }
                    }   
                    if(f) break;
                }
                if(f) break;
            }
            if(!f) 
            {
                g=1;
                break;
            }
        }
        if(g) cout<<"-1\n";
        else
        {
            cout<<ans.size()<<"\n";
            for(auto e:ans) cout<<e.first<<" "<<e.second<<"\n";
        }
    }   
}