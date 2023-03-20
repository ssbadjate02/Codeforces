#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 4e5+7
#define M 1000000007

vector<ll> v1(N),v2(N),vis(N),p1(N),p2(N);
vector<vector<ll>> adj(N);

int n=100;
void func(int i)
{
printf("%d\n",i);
if(i>=n) return ;
func(2*i);
}

int main()
{
    func(1);
}