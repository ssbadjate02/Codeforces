    #include <bits/stdc++.h>
    #define fastio ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define endl "\n"
    #define ll long long int
    #define ld long double
    #define pb push_back
    #define mp make_pair
    #define vll vector<ll>
    #define vpll vector<pair<ll,ll>>
    #define all(x) x.begin(),x.end()
    ld pi=3.14159265358979323846;
     
    using namespace std;
     
    int main()
    {
        fastio;
        ll t;
        cin >> t;
        while (t--)
        {
            ll n,k;
            cin >> n >> k;
            ll sum=n*(n+1)/2;
            if (sum-k<=n && sum-k>0) cout << sum-k << endl;
            else cout << -1 << endl;
        }
        return 0;
    }