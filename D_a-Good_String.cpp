#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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

int helper(string s,char c){
    int n = s.size();
    if(n==1){
        if(s[0]==c)return 0;
        return 1;
    }
    int left = helper(s.substr(0,n/2),c+1);
    left += n/2 - (count(s.begin()+n/2,s.end(),c));
    int right = helper(s.substr(n/2,n/2),c+1);
    right+= n/2 - (count(s.begin(),s.begin()+n/2,c));
    return min(left,right);
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
        cout<<helper(s,'a')<<"\n";
    }
    return 0;
}