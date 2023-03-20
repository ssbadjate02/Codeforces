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

vector<string> ans;
int n;
void regularBrac(int l, int r, string s){
    if(l==n && r==n){
        ans.push_back(s);
        return;
    } 
     
    if(l<n){
        regularBrac(l+1, r, s+"(");
    }
  
    if(r<l){
        regularBrac(l, r+1, s+")");
    }
       
}

int main()
{
    FASTIO;
    cin>>n;
    if(n%2)
    {
        cout<<"0\n";
        return 0;
    }
    n/=2;
    regularBrac(0,0,"");
    cout<<ans.size()<<"\n";
    sort(all(ans));
    for(auto e:ans) cout<<e<<"\n";
    
}