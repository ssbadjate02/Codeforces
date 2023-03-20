#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size()) 
#define N 2e5+7

ll _mergeSort(ll arr[], ll temp[], ll left, ll right);
ll merge(ll arr[], ll temp[], ll left, ll mid,ll right);

ll mergeSort(ll v[], ll n)
{
    ll temp[n];
    return _mergeSort(v, temp, 0, n - 1);
}
ll _mergeSort(ll v[], ll temp[], ll l, ll r)
{
    ll m, inv_count = 0;
    if (r > l) {
        m = (r + l) / 2;
        inv_count += _mergeSort(v, temp, l, m);
        inv_count += _mergeSort(v, temp, m + 1, r);
        inv_count += merge(v, temp, l, m + 1, r);
    }
    return inv_count;
}

ll merge(ll v[], ll temp[], ll l, ll m,ll r)
{
    ll i, j, k;
    ll inv_count = 0;
 
    i = l; 
    j = m;
    k = l;
    while ((i <= m - 1) && (j <= r)) {
        if (v[i] <= v[j]) {
            temp[k++] = v[i++];
        }
        else {
            temp[k++] = v[j++];
            inv_count = inv_count + (m - i);
        }
    }
    while (i <= m - 1)
        temp[k++] = v[i++];
    while (j <= r)
        temp[k++] = v[j++];
    for (i = l; i <= r; i++)
        v[i] = temp[i];
 
    return inv_count;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;;
        cin>>n;
        deque<ll> q;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(q.empty())
            {
                q.push_back(a);
                l=a;
            }
            else if(a<=l) q.push_front(a),l=a;
            else q.push_back(a);
        }
        ll v[n],i=0;
        while(!q.empty())
        {
            v[i++]=q.front();
            q.pop_front();
            cout<<v[i-1]<<" ";
        }
        cout<<"\n";
        cout<<mergeSort(v,n)<<"\n";
    }   
}