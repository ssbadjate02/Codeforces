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
    ll  m,f=0;
    cin>>m;
    multiset<ll> s;
    queue<ll> q;
    map<ll,ll> mp;
    while(m--)
    {
        ll a,b;
        cin>>a;
        if(a==1)
        {
            cin>>b;
            q.push(b);
        }
        else if(a==2)
        {
            // cin>>b;
            if(!s.empty())
            {
                cout<<*s.begin()<<"\n";
                s.erase(s.begin());
            }
            else 
            {
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        else 
        {
            while(!q.empty())
            {
                s.insert(q.front());
                q.pop();
            }
        }
    }
}