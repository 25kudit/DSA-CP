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
        int n,m;
        cin>>n>>m;
        vector<int> sum(n);
        vector<vector<int>> a(n,vector<int> (m));
        vector<set<int>> one(m),zero(m);
        int total=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                s+=a[i][j];
            }
            total+=s;
            sum.push_back(s);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[j][i]==1){
                    one[i].insert(j+1);
                }
                else{
                    zero[i].insert(j+1);
                }
            }
        }
        if(total%n){
            cout<<-1<<"\n";
            continue;
        }
        int req = total /n;
        vector<int> greater;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(sum[i]==req)continue;
            else if(sum[i]>req){
                greater.push_back(i);
            }
        }
        for(auto it: greater){
            int gr = sum[it]-req;
            while(gr>0){
                
            }
        }






    }
    return 0;
}