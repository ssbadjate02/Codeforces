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
        if(xa==xb && xb==xc && max(ya,yb)>yc && min(ya,yb)<yc) cout<<abs(ya-yb)+2;
        else if(ya==yb && yb==yc && max(xa,xb)>xc && min(xa,xb)<xc) cout<<abs(xa-xb)+2;
        else cout<<abs(xa-xb)+abs(ya-yb);
        cout<<"\n";
    }   
}