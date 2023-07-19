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
        if(n%2){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> freq(26,0);
        for(auto it :s)
            freq[it-'a']++;
        
        int f=0;
        for(int i=0;i<26;i++){
            if(freq[i]>n/2){
                f=1;
                break;
            }
        }
        if(f){
            cout<<-1<<"\n";
            continue;
        }
        int cnt=0;
        vector<int> ind(26,0);
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1])ind[s[i]-'a']++,cnt++;
        }
        cout<<max(*max_element(ind.begin(),ind.end()),(cnt+1)/2)<<"\n";
    }
    return 0;
}