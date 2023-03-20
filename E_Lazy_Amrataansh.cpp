#include "bits/stdc++.h"
using namespace std;
int cnt = 0 , ans = 0;
vector<int>num;
void factors(int n , int sub) {
    if(sub == 0) return;
    if(n % sub == 0) cnt++;
    factors(n,sub-1);
}
int calc(int n , vector<int> &arr) {
    cnt = 0;
    factors(arr[n] , arr[n] - 1);
    num[n] = cnt;
    ans = max(ans,cnt);
    if(n > 0) calc(n-1,arr);
    return ans;
}

int32_t main()
{
    int n; cin >> n;
    vector<int>arr(n);
    num.resize(n,0);
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    calc(n-1,arr);
    int position = max_element(num.begin() , num.end()) - num.begin();
    cout << arr[position] << endl;
    sort(nu)
}