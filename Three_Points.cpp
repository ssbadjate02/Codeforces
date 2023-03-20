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
        ll xa,ya,xb,yb,xc,yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        if(xa>xc) swap(xa,xc);
        if(ya>yc) swap(ya,yc);
        if(yb>=ya && xb>=xa && yc>=yb && xc>=xb)
        {
            if(xa==xb || ya==yb || xc==xb || yc==yb) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }      
}