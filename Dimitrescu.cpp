#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<vector<pair<ll,ll>>> dp(21,vector<pair<ll,ll>>(21));
vector<vector<ll>> possible(21,vector<ll>(21,0));

void sol(ll i,ll j)
{
    ll f=0,g=0;
    ll x,y;
    for(x=0;x<=30;x++)
    {
        for(y=0;y<=30;y++)
        {
            if(x*2+y*3==i)
            {
                f=1;
                break;
            }
        }
        if(f) break;
    }
    vector<vector<ll>> ans(i,vector<ll>(j));
    if(f)
    {
        ll i1=0;
        ll a=0,tempx=x,tempy=y,b=0;
        for(ll j1=0;j1<j;j1++)
        {
            x=tempx,y=tempy;
            while(x>0)
            {
                ans[i1][j1]=a+'A';
                ans[i1+1][j1]=a+'A';
                i1+=2;
                x--;
                a++;
                a%=26;
            }
            while(y>0)
            {
                ans[i1][j1]=a+'A';
                ans[i1+1][j1]=a+'A';
                ans[i1+2][j1]=a+'A';
                i1+=3;
                y--;
                a++;
                a%=26;
            }
            b++;
            a=b;
        }
        for(ll i1=0;i1<i;i1++)
        {
            for(ll j1=0;j1<j;j1++) cout<<ans[i1][j1];
            cout<<"\n";
        }
        return;
    } 
    for(x=0;x<=30;x++)
    {
        for(y=0;y<=30;y++)
        {
            if(x*2+y*3==j)
            {
                f=1;
                break;
            }
        }
        if(f) break;
    }
    if(f)
    {
        ll j1=0;
        ll a=0,tempx=x,tempy=y,b=0;
        for(ll i1=0;i1<i;i1++)
        {
            x=tempx,y=tempy;
            while(x>0 && i1<i && j1+1<j)
            {
                ans[i1][j1+1]=a+'A';
                ans[i1][j1]=a+'A';
                j1+=2;
                x--;
                a++;
                a%=26;
            }
            while(y>0 && i1<i && j1<j)
            {
                ans[i1][j1]=a+'A';
                ans[i1][j1+1]=a+'A';
                ans[i1][j1+2]=a+'A';
                j1+=3;
                y--;
                a++;
                a%=26;
            }
            b++;
            a=b;
        }
         for(ll i1=0;i1<i;i1++)
        {
            for(ll j1=0;j1<j;j1++) cout<<ans[i1][j1];
            cout<<"\n";
        }
        return;
    } 
}

int main()
{
    FASTIO;
    for(ll i=0;i<21;i++) possible[0][i]=1,possible[i][0]=1;
    for(ll i=1;i<21;i++)
    {
        for(ll j=1;j<21;j++)
        {
            ll f=0;
            for(ll x=0;x<205 ;x++)
            {
                for(ll y=0;y<150;y++)
                {
                    if(2*x+3*y==i*j)
                    {
                        dp[i][j]={x,y};
                        possible[i][j]=1;
                        f=1;
                        break;
                    }
                }
                if(f) break;
            }
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        if(possible[x-1][m] && possible[1][y-1] && possible[1][m-y] && possible[n-x][m])
        {
            cout<<"YES\n";
            sol(x-1,m);
            sol(1,y-1);
            cout<<"*";
            sol(1,m-y);
            sol(n-x,m);
        }
    }

}