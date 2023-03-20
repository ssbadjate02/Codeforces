#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        cin>>a[i];
        sort(a, a+n, greater<ll>());
        ll ans[n+1];
        ans[0] = 0;
        ll time = 0;
        ll right = 1;
        ll left = -1;
        for(ll i =0; i<n; i++)
        {
            if(i % 2 == 0)
            {
                ans[i+1] = right;
                time += a[i]*2*abs(right);
                right++;
            }
            else
            {
                ans[i+1] = left;
                time += a[i]*2*abs(left);
                left--;
            }
        }
        cout<<time<<endl;
        for(ll i=0; i<n+1; i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}