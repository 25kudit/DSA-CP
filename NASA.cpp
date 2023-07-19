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

vector<int> pal;
bool ispal(int n) {
    string str = to_string(n);
    int len = str.length();
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}
void generate(){
    for(int i=1;i<=32768;i++){
        if(ispal(i))
            pal.push_back(i);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    generate();
    while (T--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            mp[t]++;
        }
        int ans =0;
        for(auto it : mp){
            int f = it.second;
            ans+=f*(f+1)/2;
        }
        int temp=0;
        for(auto it : mp){
            int f = it.second;
            for(auto num : pal){
                if(mp.find(num^it.first)!=mp.end())
                    temp+=f*mp[num^it.first];
            }
        }
        cout<<ans+temp/2<<"\n";

    }
    return 0;
}