 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define pb push_back
 #define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 #define vt vector
 #define sz(x) int(x.size()) 
 #define N 2e5+7
 
 
int Substr(string s2, string s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for(;i<s1.length();i++)
    {
        if(counter==s2.length())
            break;
        if(s2[counter]==s1[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.length()?0:i-counter;
}

 int main()
 {
    FASTIO;
    vector<string> v;
    for(ll i=0;i<26;i++)
    {
        string s1="";
        s1+='a'+i;
        v.pb(s1);
    }
    for(ll i=0;i<26;i++)
    {
        for(ll j=0;j<26;j++)
        {
            string s1="";
            s1+='a'+i;
            s1+='a'+j;
        }
    }
    for(ll i=0;i<26;i++)
    {
        for(ll j=0;j<26;j++)
        {
            for(ll k=0;k<26;k++)
            {
                string s1="";
                s1+='a'+i;
                s1+='a'+j;
                s1+='a'+k;
                v.pb(s1);
            }
        }
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        string s;
        cin>>n>>s;
        for(ll i=0;i<v.size();i++)
        {
            if(Substr(v[i],s))
            {
                cout<<v[i]<<"\n";
                break;
            }
        }
    }
 }