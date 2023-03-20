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
        ll n,x;
        cin>>n>>x;
        if(n%2==0 && x>n/2) 
        {
            cout<<"-1\n";
            continue;
        }
        if(n%2 && x>(n+1)/2)
        {
             cout<<"-1\n";
            continue;
        }
        string a="";
        for(char i = 'a';i<='z' && i<'a'+x;i++)
        {
            a+=i;
        }
        ll i = a.size();
        while(i<(n+1)/2)
        {
            a+='a';
            i++;
        }
        cout<<a;
        reverse(a.begin(),a.end());
        if(n%2) a.erase(a.begin());
        cout<<a<<"\n";
    }   
}