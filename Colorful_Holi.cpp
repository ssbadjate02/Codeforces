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
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,k,c1=0,c2=0;
       cin>>n>>x>>y>>k;
        vector<int> v(n);
        map<int,int> m1,m2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<=y && v[i]>=x) m1[v[i]]++,c1++;
            else m2[v[i]]++,c2++;
        }
        cout<<min(m1.size()+m2.size(),m2.size()+ y-x+1)<<"\n";
        
    }   
}