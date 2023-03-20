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

set<int> printDivisors(int n)
{
    set<int> v;
    for (int i=1; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i) v.insert(i);
            else 
            {
                v.insert(i);
                v.insert(n/i);
            }
        }
    }
    return v;
}
 
bool checkPal(string s)
{
    string t = s;
    reverse(s.begin(),s.end());
    return s==t;
}

int main()
{
    FASTIO;
    ll t,tt;
    cin>>t;
    tt = t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<int> v = printDivisors(n);
        cout<<"Case #"<<tt-t<<": ";
        for(auto e:v)
        {
            string x = s.substr(0,e);
                // cout<<e<<" "<<x<<"\n";

            if(checkPal(x))
            {
                string temp = "";
                while(temp.size()<n) temp+=x;
                if(temp==s)
                {
                    cout<<x<<"\n";
                    break;
                }
            }
        }
    }   

}