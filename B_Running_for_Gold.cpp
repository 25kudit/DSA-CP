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

bool isgood(vector<int> sup,vector<int> b){
    int cnt =0;
    for(int i=0;i<5;i++){
        if(sup[i]>b[i])cnt++;
    }
    if(cnt>=3)return true;
    return false;
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
        vector<vector<int>> a(n,vector<int> (5));
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin>>a[i][j];
            }
        }
        int sup =0;
        for(int i=1;i<n;i++){
            if(isgood(a[sup],a[i]))
                sup=i;
        }
        int f=0;
        for(int i=0;i<n;i++){
            if(sup == i)continue;
            if(isgood(a[sup],a[i])){
                f=1;
                break;
            }
        }
        if(f)cout<<-1<<"\n";
        else cout<<sup+1<<"\n";


    }
    return 0;
}