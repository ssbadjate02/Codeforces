#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,string>, null_type,less<pair<int,string>>, rb_tree_tag,tree_order_statistics_node_update>

vector<string> getItems(vector<vector<string>> v)
{
    int n = v.size();
    ordered_set s;
    vector<string> ans;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(v[i][0]=="INSERT"    ) s.insert({stoi(v[i][2]),v[i][1]});
        else
        {
            ans.push_back(*(s.find_by_order(k)).second);
        } 
    }
    return ans;
}

seg



int main()
{
   vector<vector<string>> v ={
        {"INSERT","fries","4"},
        {"INSERT","SODA","2"},
        {"VIEWW","-","-"},
        {"VIEWW","-","-"},
        {"INSERT","HAM","5"},
        {"VIEW","-","-"},
        {"INSERT","NUGGETS","4"},
        {"INSERT","COOLIE","1"},
        {"VIEW","-","-"},
        {"VIEW","-","-"}
   } ;
   auto ans = getItems(v);
   for(auto e:ans) cout<<e<<"\n";
}
//1 2 
//2 4 
//1 3
//2 4 5