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
        ll n,m,f=0,tot=0,totm=0;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(i!=0 && i!=n-1 && v[i][j]=='*' && v[i-1][j]=='*' && v[i+1][j]=='*')
                {
                    f=1;
                    break;
                }
                if(j!=0 && j!=m-1 && v[i][j]=='*' && v[i][j-1]=='*' && v[i][j+1]=='*')
                {
                    f=1;
                    break;
                }
                ll c=0;
                if(v[i][j]=='*')
                {
                    tot++;
                    if(i>0 && v[i-1][j]=='*') c++;
                    if(i<n-1 && v[i+1][j]=='*') c++;
                    if(j>0 && v[i][j-1]=='*') c++;
                    if(j<m-1 && v[i][j+1]=='*') c++;
                    if(c>2 || c==0)
                    {
                        // cout<<i<<" "<<j<<"\n";
                        f=1;
                        break;
                    }
                    if(c==2) totm++;
                    
                    ll z=0;
                    if(i>0 && j>0 && v[i-1][j-1]=='*') z++;
                    if(i>0 && j<m-1 && v[i-1][j+1]=='*') z++;
                    if(i<n-1 && j>0 && v[i+1][j-1]=='*') z++;
                    if(i<n-1 && j<m-1 && v[i+1][j+1]=='*') z++;
                    if(c==1 && z>1) 
                    {
                        f=1;
                        break;
                    }
                    if(c==2 && z)
                    {
                        // cout<<1;

                        f=1;
                        break;
                    }
                }
            }
            if(f) break;
        } 
        if(totm*3!=tot) f=1;
        // cout<<totm<<" "<<tot<<"\n";
        cout<<(!f?"YES\n":"NO\n");
        
    }   
}