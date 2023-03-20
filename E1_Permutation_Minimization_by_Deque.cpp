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
            ll n,l,r;;
            cin>>n;
            deque<ll> q;
            for(ll i=0;i<n;i++)
            {
                ll a;
                cin>>a;
                if(q.empty())
                {
                    q.push_back(a);
                    l=a;
                }
                else if(a<=l) q.push_front(a),l=a;
                else q.push_back(a);
            }
            while(!q.empty())
            {
                cout<<q.front()<<" ";
                q.pop_front();
            }
            cout<<"\n";
        }   
    }