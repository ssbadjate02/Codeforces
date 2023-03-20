#include <bits/stdc++.h>
using namespace std;

int frwd[100005],back[100005];
int entry[100001];

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int T;
    cin >> T;
    while(T--){
    int N, Q;
    cin >> N >> Q;
    
    frwd[0] = 0;
    back[N + 1] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> entry[i];
    }
    for (int i = 1; i <= N; i++)
    {
        frwd[i] = __gcd(frwd[i-1], entry[i]);
        // cout<<frwd[i]<<" ";
    }
    // cout<<"\n";
    for (int i = N; i >= 1; i--)
    {
        back[i] = __gcd(back[i+1], entry[i]);
    }
    // for (int i = 1; i <= N; i++) cout<<back[i]<<" ";
    // cout<<"\n";
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        cout << __gcd(frwd[L - 1],back[R+1]) << "\n";
    }
    return 0;
    }
}