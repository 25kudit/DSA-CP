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
        string s;
        cin>>s;
        int n=s.size();
        vector<int> a(10,0);
        for(int i=0;i<n;i++) a[s[i]-'0']++;
        int ans=n;

        for(int i=0;i<10;i++){
            ans = min(ans,n-a[i]);
        }
        for(int i='0';i<='9';i++){
            for(int j='0';j<='9';j++){
                if(i==j)continue;
                int turn=0,sz=0;
                for(int k=0;k<n;k++){
                    if(s[k]==i && turn==0){
                        sz++;
                        turn=1;
                        continue;
                    }
                    if(s[k]==j && turn ==1){
                        sz++;
                        turn =0;
                    }
                }
                if(turn ==0)ans=min(ans,n-sz);
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}