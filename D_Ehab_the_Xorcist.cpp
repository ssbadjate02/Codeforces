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
    ll u,v;
    cin>>u>>v;
    ll x=(v-u)/2;
    if(u>v || u%2!=v%2)
    {
        cout<<"-1\n";
    }   
    else if(u==v && v==0) cout<<0;
    else if(u==v) cout<<1<<"\n"<<u;
    else if(!(u&x))
    {     
        cout<<"2\n"<<(u^x)<<" "<<x;
    }
    else
    {
        cout<<"3\n"<<u<<" "<<x<<" "<<x;
    }

}