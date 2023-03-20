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
int n,m;
string a;
vector<string> wordlist;
set<string> ans;
void f(string s,int i,string t)
{
    if(find(all(wordlist),s)!=wordlist.end()) 
    {
        if(i==n)
        {
            ans.insert(t);
            return;
        }
        // t+="#";
        // s="";
        f("",i,t+"#");
    }   
    if(i>=n) return;
    f(s+a[i],i+1,t+a[i]);
}

int main()
{
    FASTIO;
    cin>>n>>a>>m;
    wordlist.resize(m);
    for(int i=0;i<m;i++) cin>>wordlist[i];
    f("",0,"");
    cout<<ans.size()<<"\n";
    for(auto e:ans) cout<<e<<"\n";
}