#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define all(x) (x).begin(),(x).end()
#define ss second
#define ff first
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

vector<int> siz,parent;

int find_set(int x) {
    if(x==parent[x]) return x;
    return parent[x] = find_set(parent[x]);
}

void merge(int x, int y) {
    x = find_set(x), y = find_set(y);
    if(x == y) return;
    if(siz[x] < siz[y]) swap(x, y);
    siz[x] += siz[y];
    parent[y] = x;
}


int main()
{
    FASTIO;
    ll T;
    cin>>T;
    while(T--)
    {
        ll n;
        string s,t="";
        cin>>n>>s;
        map<char,char> m;
        vector<int>v(26),k(26);

        parent.resize(26);
        siz.resize(26,1);
        for(ll i=0;i<26;i++) parent[i] = i;

        for(ll i=0;i<n;i++)
        {
            if(k[s[i]-'a']) continue;
            for(char a='a';a<='z';a++)
            {
                if(s[i]==a || v[a-'a']) continue;
                if(find_set(s[i]-'a')==find_set(a-'a')) continue;
                merge(s[i]-'a',a-'a');
                v[a-'a'] = 1;
                k[s[i]-'a'] = 1;
                m[s[i]] = a;
                break;
            }
                // cout<<1;

        }
        char a,b;
        for(int i=0;i<26;i++)
        {
            if(!k[i]) a= i+'a';
            if(!v[i]) b = i+'a'; 
        }
        m[a] = b;
        for(ll i=0;i<n;i++)t+=m[s[i]];
        cout<<t<<"\n";
    }
}   