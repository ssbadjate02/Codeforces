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
string a,b;

void takeTurns(int i,int j,int c,int last,string s)
{
    if(i>n || j>n) return;
    if(s.size()==n)
    {
        ans.pb(s);
        return;
    }
    if(c<2)
    {
        if(last==0)
        {
            takeTurns(i+1,j+1,c+1,0,s+a[i]);
            takeTurns(i+1,j+1,1,1,s+b[j]);
        }
        else
        {
            takeTurns(i+1,j+1,1,0,s+a[i]);
            takeTurns(i+1,j+1,c+1,1,s+b[j]); 
        }
    }
    if(c==2)
    {
       if(last==0)
        {
            takeTurns(i+1,j+1,1,1,s+b[j]);
        }
        else
        {
            takeTurns(i+1,j+1,1,0,s+a[i]);
        } 
    }
}

int main()
{
    FASTIO;
    cin>>n>>a>>b;
    takeTurns(0,0,0,0,"");
    sort(all(ans));
    cout<<ans.size()<<"\n";
    for(auto e:ans) cout<<e<<"\n";
}