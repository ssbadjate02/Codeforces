#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

string a,b;
int n,m;
// int f(int i,int j)
// {
//     if(j>=m) return 1;
//     if(i>=n) return 0;
//     // if(i==0 && (a[i]!=b[j] || a[i+1]!=b[j])) return 0;
//     // if(a[i]!=b[j] || a[i+1 + !(i==0)]!=b[j]) return 0;
//     if(a[i]==b[j] && i+1 + !(i==0)<n && a[i+1 + !(i==0)]==b[j]) return max(max(f(i+1,j+1),f(i+3,j+1)),max(f(i+2+!(i==0),j+1),f(i+4+!(i==0),j+1)));
//     if(a[i]==b[j]) return max(f(i+1,j+1),f(i+3,j+1));
//     if(a[i+1 + !(i==0) && i+1+!(i==0)]==b[j]) return max(f(i+2+!(i==0),j+1),f(i+4+!(i==0),j+1)); 
//     return 0;
// }

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        n=a.size(),m=b.size();
        // ll x=f(0,0);
        // if(x) cout<<"YES\n";
        // else cout<<"NO\n";
        // cout<<f(0,0)<<"\n";
        int i=n-1,j=m-1,k=0;
        while(i>=0 && j>=0)
        {
            if(a[i]==b[j])
            {
                i--;
                j--;
                k++;
            }
            else
            {
                i-=2;
            }
        }
        if(j<0) cout<<"YES\n";
        else cout<<"NO\n";
    }   
}