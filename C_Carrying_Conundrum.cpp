#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

vector<int> v(15);
string s;
vector<vector<vector<int>>> dp(15, vector<vector<int>>(15, vector<int>(15,-1)));
int f(vector<int> v,int k)
{
    if(k<0) return 1;
    if(k>=1 && dp[k][v[k]][v[k-1]]!=-1) return dp[k][v[k]][v[k-1]]; 
    int ans=0;
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            if(((v[k]+i+j)%10)==s[k]-'0')
            {
                vector<int> temp=v;
                int carry=(temp[k]+i+j)/10;
                int r=(temp[k]+j+i)%10;
                if(carry>0 && k<2) continue;
                temp[k-2]=carry;
                // temp[k]=r;   
                // cout<<i<<" "<<j<<" "<<k<<"\n";
                ans+=f(temp,k-1);
            }
        }
    }
  if(k>=1) return dp[k][v[k]][v[k-1]] = ans;
  else return ans;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll c;
        cin>>c;
        s=to_string(c);
        // cout<<s<<"\n";
        cout<<f(v,s.size()-1)-2<<"\n";
    }   
}