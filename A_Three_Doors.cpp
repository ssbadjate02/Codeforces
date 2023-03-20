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
        ll x;
        vector<int> v(4);
        cin>>x>>v[1]>>v[2]>>v[3];
        if(v[x]==0)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            x = v[x];
            if(v[x]==0)
            {
                cout<<"NO\n";
                continue;   
            }
            // else
            // {
            //     x = v[x];
            //     if(v[x]==0)
            //     {
            //         cout<<"NO\n";
            //         continue;   
            //     }
            // }
        }
        cout<<"YES\n";
    }   
}