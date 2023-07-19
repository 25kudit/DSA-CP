#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
#define int long long
#define float long double
#define endl "\n"
#define watch(x) clog << "[" << __LINE__ << "] " << (#x) << " = " << (x) << endl
 
string findDiff(string str1, string str2)
{
    string str = "";
 
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;
 
    int carry = 0;
 
    for (int i = n2 - 1; i >= 0; i--) {
        
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0')- carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
 
    for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (str1[i] == '0' && carry) {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) 
            str.push_back(sub + '0');
        carry = 0;
    }
 
    reverse(str.begin(), str.end());
 
    return str;
}
 


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0] != '9'){
            string sub="";
            for(int i=0;i<n;i++) sub+='9';
            cout<<findDiff(sub,s)<<"\n";
        }
        else{
            string sub="";
            for(int i=0;i<=n;i++) sub+='1';
            cout<<findDiff(sub,s)<<"\n";
        }
    }
    return 0;
}