#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back



int main()
{
    string s="1234";
    vector<string> v;
    do{
        v.pb(s);
    }while(next_permutation(s.begin(),s.end()));
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++) cout<<i<<" " << v[i]<<"\n";
}