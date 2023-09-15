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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]--;
        }
        if(k==1){
            int f=0;
            for(int i=0;i<n;i++){
                if(a[i]!=i){
                    f=1;
                    break;
                }
            }
            if(f)cout<<"NO\n";
            else cout<<"YES\n";
            continue;
        }
        int f=0;
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i])continue;
            int st = i;
            vector<int> cycle;
            while(visited[st]==0){
                visited[st]=1;
                cycle.push_back(st);
                st = a[st];
            }
            int len = cycle.size()-(find(cycle.begin(),cycle.end(),st)-cycle.begin());
            if(len!=k && len!=0){
                f=1;
                break;
            }

        }
        if(f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}