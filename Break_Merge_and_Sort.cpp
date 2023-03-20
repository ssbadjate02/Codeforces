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
        ll n,ans=0;
        cin>>n;
        multiset<ll> s;
        for(int i=0;i<n;i++)
        {
            ll m;
            cin>>m;
            vector<ll> v(m),a;
            for(ll j=0;j<m;j++) cin>>v[j];
            ll siz = 1;
            for(int j=1;j<m;j++)
            {
                if(v[j]<v[j-1])
                {
                    a.push_back(siz);
                    siz = 0;
                }
                siz++;        
            }
            a.push_back(siz);
            for(auto e:a) s.insert(e);
            int j=0,k=a.size() -1;
            while(j<k)
            {
                if(a[j]<=a[k]) ans+=a[j++];
                else ans+=a[k--]; 
            }
            // s.insert(siz);
        }  
        while(s.size()>1)
        {
            auto it = s.begin();
            auto it2 = it;
            it2++;
            ll sum = *it + *it2;
            ans+=sum;
            s.erase(it2);
            s.erase(it);
            s.insert(sum);
        }
        cout<<ans<<"\n";
    }   
}
/*


*/