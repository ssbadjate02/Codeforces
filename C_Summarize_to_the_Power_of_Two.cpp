#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())
#define forn(i,n) for(int i=0;i<n;i++) 
const ll N=1e12;

int main()
{
    int n;
cin >> n;
vector<int> a(n);
map<int,int> c;
forn(i, n) {
    cin >> a[i];
    c[a[i]]++;
}
int ans = 0;
forn(i, n) {
    bool ok = false;
    forn(j, 31) {
        int x = (1 << j) - a[i];
        if (c.count(x) && (c[x] > 1 || (c[x] == 1 && x != a[i])))
            ok = true;
    }
    if (!ok)
        ans++;
}
cout << ans << endl;
}