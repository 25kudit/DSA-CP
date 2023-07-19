#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define endl "\n"
#define free                            \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define LOG(n) 63 - __builtin_clzll(n)
const long long MAX_N = 1e6 + 7;
const long long MOD = 1e9 + 7;
const long long mod = 998244353;
const long long INF = LONG_LONG_MAX;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_map;
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin>>str;
    freopen(str.c_str (), "r", stdin);   
    freopen(str.c_str (), "w", stdout); 
    string str1;
    map<string, int> mp;
    while(getline(cin, str1))
    {
        string hostname=str1.substr(0, str1.find(" "));
        mp[hostname]++;
    }
    
}