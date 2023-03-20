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

string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    // if (isSmaller(str1, str2))
    //     swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i = n2 - 1; i >= 0; i--) {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0')
                   - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    // subtract remaining digits of str1[]
    for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (str1[i] == '0' && carry) {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) // remove preceding 0's
            str.push_back(sub + '0');
        carry = 0;
    }
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}

int main()
{
    FASTIO;
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll n;
        cin>>n>>s;
        if(n==1)
        {
            cout<<s<<"\n";
            continue;
        }
        for(ll i=0;i<10;i++)
        {
            string a="";
            a+='1';
            for(ll j=0;j<n-1;j++) a+='0'+i;
            a+='1';
            string b = findDiff(a,s);
            ll z=b.size();
            ll j=0;
            while(b[j]=='0')j++,z--;
            if(z==s.size())
            {
                cout<<b<<"\n";
        // cout<<a<<"\n";
                break;
            }
        }
    }   
}