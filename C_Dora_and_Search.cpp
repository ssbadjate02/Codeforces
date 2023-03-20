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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(auto &i:v) cin>>i;
        ll i=0,j = n-1;
        ll minn = 1;
        ll maxx = n;
        while(i<n && j>=0 && (v[i]==minn || v[i]==maxx || v[j]==minn || v[j]==maxx)) 
        {
            if(v[i]==maxx) maxx--,i++;
            else if(v[i]==minn) minn++,i++;
            else if(v[j]==minn) minn++,j--;
            else if(v[j]==maxx) maxx--,j--;
        }
        if(j-i+1<4) cout<<"-1\n";
        else
        {
            cout<<i+1<<" "<<j+1<<"\n";
        }
        
    }   
}